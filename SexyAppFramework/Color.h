#pragma once

struct SexyRGBA
{
    unsigned char mRed, mGreen, mBlue, mAlpha;
};

class Color
{
public:
    int mRed, mGreen, mBlue, mAlpha;
    
    // DONE
    Color(int theRed, int theGreen, int theBlue) : mRed(theRed), mGreen(theGreen), mBlue(theBlue) {};
    // DONE
    Color(int theRed, int theGreen, int theBlue, int theAlpha) : mRed(theRed), mGreen(theGreen), mBlue(theBlue), mAlpha(theAlpha) {};

    // DONE
    int GetRed() const { return mRed; };
    // DONE
    int GetGreen() const { return mGreen; };
    // DONE
    int GetBlue() const { return mBlue; };
    // DONE
    int GetAlpha() const { return mAlpha; };
};
