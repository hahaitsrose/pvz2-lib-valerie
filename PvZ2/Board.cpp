#include "Board.h"

int gWidth = 0;
int gHeight = 0;

AspectRatio GetAspectRatio()
{
    float ratio = (float)gWidth / (float)gHeight;
    if (ratio <= 1.4f)
    {
        return Letterbox;
    }
    else if (ratio >= 1.41f && ratio <= 1.85f)
    {
        return Widescreen;
    }
    else
    {
        return Ultrawide;
    }
}

using ReinitForSurfaceChange = void(*)(int, UIOrientation, int, int, bool);
ReinitForSurfaceChange oRFSC = nullptr;

void HkReinitForSurfaceChange(int thisptr, UIOrientation orientation, int width, int height, bool force)
{
    gWidth = width;
    gHeight = height;
    return oRFSC(thisptr, orientation, width, height, force);
}

using boardCtor = void(*)(void*);
boardCtor oBoardCtor = NULL;

void* hkBoardCtor(Board* board)
{
    oBoardCtor(board);

    board->m_lawnRect.mX = 200; //200
    board->m_lawnRect.mY = 160; //160

    switch (GetAspectRatio())
    {
    case Letterbox:
        {
            board->m_lawnRect.mWidth = 576; //576
            board->m_lawnRect.mHeight = 500; //380
            break;
        }
    case Widescreen:
        {
            board->m_lawnRect.mWidth = 576; //576
            board->m_lawnRect.mHeight = 450; //380
            break;
        }
    case Ultrawide:
        {
            board->m_lawnRect.mX = 450;
            board->m_lawnRect.mY = 160;
            board->m_lawnRect.mWidth = 576; //576
            board->m_lawnRect.mHeight = 525; //380
            break;
        }
    }

    return board;
}

void Board::HookLifeCycle()
{
    PVZ2HookFunction(0x127415C, (void*)HkReinitForSurfaceChange, (void**)&oRFSC, "ReinitForSurfaceChanged");
    PVZ2HookFunction(0x71A004, (void*)hkBoardCtor, (void**)&oBoardCtor, "Board::Board");
}