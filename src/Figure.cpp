#include <iostream>

#include "Figure.h"
#include "Save.h"


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
        img[P.y * width + P.x] = 255;
}



/*const std::vector<char> Figure::img()
{
    return img;
}*/

Figure::Figure(int width, int height, Point coord)
    : width(width), height(height) {
  img.resize(width * height);
}
Figure::~Figure() {
        std::cout << "Deleting Figure " << Name << std::endl;
    }

void Figure::clearFigure() {
  for (std::vector<char>::iterator it = img.begin(); it != img.end();it++)
   {
    *it = 0;
  }
}

void Figure::save(std::string filename) {

  SaveImg(filename, img, width, height);
}
char Figure::getPointValue(int x, int y)
{
  return img[y*width + x];

}