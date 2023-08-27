#include <iostream>
#include <cmath>

class Vector
{
public:
    double x, y, z;

    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}

    void getCoordinates(double &xOut, double &yOut, double &zOut) const
    {
        xOut = x;
        yOut = y;
        zOut = z;
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

    Vector operator+(const Vector &other) const
    {
        return Vector(x + other.x, y + other.y, z + other.z);
    }

    Vector operator-(const Vector &other) const
    {
        return Vector(x - other.x, y - other.y, z - other.z);
    }

    Vector operator*(double scalar) const
    {
        return Vector(x * scalar, y * scalar, z * scalar);
    }

    Vector operator/(double scalar) const
    {
        return Vector(x / scalar, y / scalar, z / scalar);
    }

    bool Vector::operator==(const Vector &other) const
    {
        return x == other.x && y == other.y && z == other.z;
    }

    bool Vector::operator!=(const Vector &other) const
    {
        return !(*this == other);
    }
};

int main()
{
    return 0;
}