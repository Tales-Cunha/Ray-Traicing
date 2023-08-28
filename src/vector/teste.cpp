#include "vector.h"
#include <iostream>
using namespace std;

int main() {
    Vector v1(1.0, 2.0, 3.0);
    Vector v2(4.0, 5.0, 6.0);

    double x, y, z;

    v1.getCoordinates(x, y, z);
    std::cout << "Vector v1: (" << x << ", " << y << ", " << z << ")" << std::endl;

    double dotProduct = v1.dot(v2);
    std::cout << "Dot product of v1 and v2: " << dotProduct << std::endl;

    Vector crossProduct = v1.cross(v2);
    crossProduct.getCoordinates(x, y, z);
    std::cout << "Cross product of v1 and v2: (" << x << ", " << y << ", " << z << ")" << std::endl;

    double v1Length = v1.length();
    std::cout << "Length of v1: " << v1Length << std::endl;

    Vector normalizedV1 = v1.normalize();
    normalizedV1.getCoordinates(x, y, z);
    std::cout << "Normalized v1: (" << x << ", " << y << ", " << z << ")" << std::endl;

    Vector sum = v1 + v2;
    sum.getCoordinates(x, y, z);
    std::cout << "Sum of v1 and v2: (" << x << ", " << y << ", " << z << ")" << std::endl;

    Vector difference = v1 - v2;
    difference.getCoordinates(x, y, z);
    std::cout << "Difference of v1 and v2: (" << x << ", " << y << ", " << z << ")" << std::endl;

    Vector scaledV1 = v1 * 2.0;
    scaledV1.getCoordinates(x, y, z);
    std::cout << "Scaled v1: (" << x << ", " << y << ", " << z << ")" << std::endl;

    Vector dividedV2 = v2 / 2.0;
    dividedV2.getCoordinates(x, y, z);
    std::cout << "Divided v2: (" << x << ", " << y << ", " << z << ")" << std::endl;

    bool isEqual = (v1 == v2);
    std::cout << "v1 is equal to v2: " << (isEqual ? "true" : "false") << std::endl;

    bool isNotEqual = (v1 != v2);
    std::cout << "v1 is not equal to v2: " << (isNotEqual ? "true" : "false") << std::endl;

    return 0;
}
