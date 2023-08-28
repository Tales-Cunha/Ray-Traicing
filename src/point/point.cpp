#include "Point.h"
#include "../vector/vector.h"


Point::Point(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}

Point Point::sumVectorToPoint(const Vector &other) const {
	Point a = Point(other.x + x, other.y + y, other.z + z);
    return a;
}

Vector Point::getVectorToPoint(const Point &other)const {
	Vector a =  Vector(other.x - x, other.y - y, other.z - z);
    
	return a;
}