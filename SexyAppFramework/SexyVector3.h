#pragma once

class SexyVector3
{
public:
    float x, y, z;
    SexyVector3() : x(0), y(0), z(0) {};
    SexyVector3(float x, float y, float z) : x(x), y(y), z(z) {};
    
    SexyVector3 operator+(const SexyVector3& other) const { return SexyVector3(x + other.x, y + other.y, z + other.z); };
    SexyVector3 operator-(const SexyVector3& other) const { return SexyVector3(x - other.x, y - other.y, z - other.z); };
    SexyVector3 operator-() const { return SexyVector3(-x, -y, -z); };
    SexyVector3 operator*(float scale) const { return SexyVector3(x * scale, y * scale, z * scale); };
    SexyVector3 operator/(float divisor) const { return SexyVector3(x / divisor, y / divisor, z / divisor); };

    float Dot(const SexyVector3& other) const { return x * other.x + y * other.y + z * other.z; };
};
