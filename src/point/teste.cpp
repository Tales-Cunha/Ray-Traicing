#include "Point.h"
#include "../vector/vector.h"
#include <iostream>

int main() {
    Point p1(1.0, 2.0, 3.0);
    Point p2(4.0, 5.0, 6.0);
    
    Vector v(2.0, 2.0, 2.0);

    Point sumResult = p1.sumVectorToPoint(v);
    std::cout << "Sum result: (" << sumResult.x << ", " << sumResult.y << ", " << sumResult.z << ")" << std::endl;

    Vector vectorResult = p1.getVectorToPoint(p2);
    std::cout << "Vector result: (" << vectorResult.x << ", " << vectorResult.y << ", " << vectorResult.z << ")" << std::endl;

    return 0;
}
