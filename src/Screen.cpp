#include "Screen.hpp"

// Fill each cell of "screen" with space char.
Screen::Screen()
{
    for (auto &&c : console)
    {
        c=std::string(this->consoleWidth,'-');
    }
    
}

void Screen::add(Rec rec)
{
    for(uint8_t y=rec.posY; y<rec.height; ++y)
    {
        this->console[y].replace(rec.posX,1,rec.width,'o');
    }
    
}

void Screen::draw()
{
    std::cout << "\n\n";

    for (auto &&c : console)
    {
        std::cout << c << std::endl;
    }
    
    
    std::cout << "\n\n";
}