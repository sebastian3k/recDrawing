#pragma once
#include <stdint.h>

class Rec
{
private:
    
public:
    Rec(const int8_t posX, const int8_t posY, const int8_t width, const int8_t height);
    
    // should make them private and create getter-methods
    int8_t posX;
    int8_t posY;
    int8_t width;
    int8_t height;
};
