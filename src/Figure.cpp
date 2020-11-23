
#include <iostream>
#include "Figure.h"

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

void Figure::setPoint(Point P)
{
        image[P.y * width + P.x] = 255;
}

const std::vector<char> Figure::img()
{
    return image;
}