#pragma once

class SexyVector2
{
public:
    float x, y;
    SexyVector2() : x(0), y(0) {};
    SexyVector2(float x, float y) : x(x), y(y) {};
    
    SexyVector2 operator+(const SexyVector2& other) const { return SexyVector2(x + other.x, y + other.y); } ;
    SexyVector2 operator-(const SexyVector2& other) const { return SexyVector2(x - other.x, y - other.y); };
    SexyVector2 operator-() const { return SexyVector2(-x, -y); };
    SexyVector2 operator*(float scale) const { return SexyVector2(x * scale, y * scale); };
    SexyVector2 operator/(float divisor) const { return SexyVector2(x / divisor, y / divisor); };

    float Dot(const SexyVector2& other) const { return x * other.x + y * other.y; };
};
