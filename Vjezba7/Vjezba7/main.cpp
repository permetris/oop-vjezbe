#include <iostream>
#include "Board.h"



int main()
{
    Board b(30, 30, 'o');
    Point p1(2, 2), p2(8, 8), p3(2, 8), p4(16, 8),p6(10,5),p5(20,29);

    b.DrawLine(p1, p2, 'x');
    b.DrawLine(p1, p2, 'x');
    b.DrawLine(p3, p4, 'b');
    b.DrawChar(p2,'a');
    b.DrawUpLine(p3,'y');
    b.DrawLine(p5, p6, 'l');


    b.Display();
    
    
}
