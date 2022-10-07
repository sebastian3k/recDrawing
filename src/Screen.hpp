#pragma once
#include <iostream>
#include "Rec.hpp"

class Screen
{
private:
    static const uint8_t consoleWidth=48;
    static const uint8_t consoleHeight=24;
    char console[consoleWidth][consoleHeight];
public:
    Screen();
    void add(Rec rec);
    void draw();
};
