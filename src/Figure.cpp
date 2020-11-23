#include <iostream>
#include "Figure.h"



void Figure::setPoint(Point P)
{
        image[P.y * width + P.x] = 255;
}

const std::vector<char> Figure::img()
{
    return image;
}