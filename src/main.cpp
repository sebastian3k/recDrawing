#include "Rec.hpp"
#include "Screen.hpp"

int main()
{
    Rec rec2(6,6,10,10);
    Rec rec3(1,1,2,2);
    Rec rec4(4,4,3,3);

    Screen screen;
    screen.add(rec2);
    screen.add(rec3);
    screen.add(rec4);

    screen.draw();

    return 0;
}