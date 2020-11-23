
#include <iostream>
#include "Figure.h"

void Figure::setPoint(int x, int y)
{
        image[y * width + x] = 255;
}

const std::vector<char> Figure::img()
{
    return image;
}