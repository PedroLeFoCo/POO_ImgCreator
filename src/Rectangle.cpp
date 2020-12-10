#include "Rectangle.h"

void Rectangle::Constructor(const int width, const int height, Point A, Point B) //Constructeur qui trace le rectangle
{
    Drawing(Point(0,0), Point(0,width));                    //   _

    Drawing(Point(0,0), Point(height,0));                   //  |_
                                                                //   _
    Drawing(Point(height,0), Point(height,width));          //  |_
                                                                //   _
    Drawing(Point(height,width), Point(0,width));           //  |_|
}

