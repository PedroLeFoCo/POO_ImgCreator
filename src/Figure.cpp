#include <iostream>

#include "Figure.h"
#include "Croix.h"

/*
void Figure::setPoint()
{
    Point P;
    img[P.m_iy * m_iWidth + P.m_ix] = 255;

}
*/

/*const std::vector<char> Figure::img()
{
    return img;
}*/
Figure::Figure(Croix *uneCroix)
{
    m_iHeight=uneCroix->getLongueur_v();
    m_iWidth=uneCroix->getLongueur_h();
}
/*
Figure::Figure(int width, int height, Point coord)
    : width(width), height(height) {
  img.resize(width * height);
}*/
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

  SaveImg(filename, img, m_iWidth, m_iHeight);
}
char Figure::getPointValue(int x, int y)
{
  return img[y*m_iWidth + x];

}