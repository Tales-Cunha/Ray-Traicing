#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
    double x, y, z;

    Vector(double _x, double _y, double _z);

    void getCoordinates(double &xOut, double &yOut, double &zOut) const;

    double dot(const Vector &other) const;

    Vector cross(const Vector &other) const;

    double length() const;

    Vector normalize() const;

    Vector operator+(const Vector &other) const;

    Vector operator-(const Vector &other) const;

    Vector operator*(double scalar) const;

    Vector operator/(double scalar) const;

    bool operator==(const Vector &other) const;

    bool operator!=(const Vector &other) const;
};

#endif // VECTOR_H
