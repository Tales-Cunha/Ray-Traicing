#ifndef COLOR_H
#define COLOR_H

class Color {
public:
    float red = 0;
    float green = 0;
    float blue = 0;

    Color(float _red, float _green, float _blue);
    float truncateValue(float &value);
};

#endif
