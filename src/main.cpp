#include "Rec.hpp"
#include "Screen.hpp"

int main()
{
    Rec rec1(3,4,10,20);
    Rec rec2(6,6,10,10);

    Screen screen;
    screen.add(rec1);
    screen.add(rec2);

    return 0;
}