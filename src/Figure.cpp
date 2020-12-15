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
Figure::Figure(){}

Figure::Figure(Rectangle *unRectangle)
{
    //m_iHeight=unRectangle->getLongueur_v();
    //m_iWidth=unRectangle->getLongueur_h();
    //m_Img.resize(m_iWidth * m_iHeight);
}

Figure::Figure(Croix *uneCroix)
{    
    m_iHeight=uneCroix->getLongueur_v();
    m_iWidth=uneCroix->getLongueur_h();
    m_Img.resize(m_iWidth * m_iHeight);
    std::cout<<"Size of img"<<m_Img.size()<<std::endl;
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
  for (std::vector<char>::iterator it = m_Img.begin(); it != m_Img.end();it++)
   {
    *it = 0;
  }
}

void Figure::save(std::string filename) {

  SaveImg(filename, m_Img, m_iWidth, m_iHeight);
}
char Figure::getPointValue(int x, int y)
{
  return m_Img[y*m_iWidth + x];

}

void Figure::setPoint(Point Pixel)
{
    m_Img.resize(m_iWidth * m_iHeight);
    std::cout<<m_Img.size()<<std::endl;
    m_Img[Pixel.getCoordY() * m_iWidth + Pixel.getCoordX()]=255;
}