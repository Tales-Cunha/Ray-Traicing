#include "color.h"
#include <iostream>

Color::Color(float _red, float _green, float _blue)
    : red(_red),
      green(_green),
      blue(_blue) {

        red = truncateValue(red);
        green = truncateValue(green);
        blue = truncateValue(blue);
      }

    



float Color::truncateValue(float &value)  {
    if (value < 0) {
        return 0;
    } else if (value > 255) {
        return 255;
    }
    return value;
}

int main() {
    Color color(-1, 230, 134);
    std::cout << color.red << "\n";
    std::cout << color.green << "\n";
    std::cout << color.blue << "\n";
}
