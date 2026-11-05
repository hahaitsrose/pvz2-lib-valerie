#pragma once


namespace Sexy
{
    constexpr float SEXY_PI = 3.14159f;
    constexpr float SEXY_TAU = 6.28318f;
    constexpr float SEXY_E = 2.71828f;
    constexpr float SEXY_PHI = 1.61803f;
    constexpr float SEXY_EPSILON = 0.001f;

    
    class SexyMath
    {
    public:
        inline static float DegToRad(float x) { return (x * SEXY_PI) / 180.0f; }
        inline static float RadToDeg(float x) { return (x * 180.0f) / SEXY_PI; }
    
    };

    template <typename T, typename U>
    inline bool ClampToMin(T& value, U& minValue)
    {
        if (value < minValue)
        {
            value = minValue;
            return true;
        }
        return false;
    }

    template <typename T, typename U>
    inline bool ClampToMax(T& value, U& maxValue)
    {
        if (value > maxValue)
        {
            value = maxValue;
            return true;
        }
        return false;
    }

    template <typename T, typename U, typename V>
    inline bool Clamp(T& value, U& minValue, V& maxValue)
    {
        if (value < minValue)
        {
            value = minValue;
            return true;
        }
        else if (value > maxValue)
        {
            value = maxValue;
            return true;
        }
        return false;
    }
    
}