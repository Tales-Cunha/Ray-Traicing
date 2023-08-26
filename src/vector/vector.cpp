#include <iostream>
#include <cmath>

class Vector
{
public:
    double x, y, z;

    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}

    Vector add(const Vector &other) const
    {
        return Vector(x + other.x, y + other.y, z + other.z);
    }

    double dot(const Vector &other) const
    {
        return x * other.x + y * other.y + z * other.z;
    }

    Vector cross(const Vector &other) const
    {
        return Vector(y * other.z - z * other.y,
                      z * other.x - x * other.z,
                      x * other.y - y * other.x);
    }

    double length() const
    {
        return sqrt(x * x + y * y + z * z);
    }

    Vector normalize() const
    {
        double len = length();
        if (len > 0.0)
        {
            return Vector(x / len, y / len, z / len);
        }
        else
        {
            return *this;
        }
    }
};

int main()
{

    return 0;
}