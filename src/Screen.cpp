#include "Screen.hpp"

// Fill each cell of "screen" with space char.
Screen::Screen()
{
    for (auto &x : this->console)
    {
        for (auto &y : x)
        {
            y=' ';
        }
        std::cout << "end of line";
    }
    
}

void Screen::add(Rec rec)
{

}

void Screen::draw()
{
    std::cout << "\n\n";

    for (auto &x : console)
    {
        for (auto y : x)
        {
            std::cout << y;
        }
    }
    
    std::cout << "\n\n";
}