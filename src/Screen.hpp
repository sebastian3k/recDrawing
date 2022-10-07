#pragma once
#include <iostream>
#include <cstring>
#include "Rec.hpp"

class Screen
{
private:
    static const uint8_t consoleWidth=32;
    static const uint8_t consoleHeight=32;
    std::string console[consoleHeight];
public:
    Screen();
    void add(Rec rec);
    void draw();
};
