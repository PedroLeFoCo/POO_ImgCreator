#include "Segment.h"

Point::Point(int Newx, int Newy) //constructeur
{
    x=Newx;
    y=Newy;
}
Point::~Point()//destructeur
{}

void Point::set(int Newx, int Newy)
{
    x=Newx;
    y=Newy;
}