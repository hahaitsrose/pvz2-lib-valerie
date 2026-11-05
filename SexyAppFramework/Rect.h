#pragma once

class Rect
{
public:
    int mX, mY, mWidth, mHeight;
    Rect() : mX(0), mY(0), mWidth(0), mHeight(0) {};
    Rect(int x, int y, int width, int height) : mX(x), mY(y), mWidth(width), mHeight(height) {};

    // DONE
    bool Intersects(const Rect& other) const
    {
        return ((other.mX + other.mWidth <= mX) ||
            (other.mY + other.mHeight <= mY) ||
            (other.mX >= mX + mWidth) ||
            (other.mY >= mY + mHeight));
    }

    // DONE
    bool Contains(int x, int y) const
    {
        return ((x >= mX) && (y >= mY) &&
            (y >= mY) && (y < mY + mHeight));
    }
};
