#include "Figure.h"
#include "Point.h"

void Point::setPoint(int width)
{
    std::cout<<"Methode set point "<<m_iy<<" "<<m_ix<<" "<<width<<std::endl;
    std::cout<<m_Img.size()<<std::endl;
    m_Img[m_iy * width + m_ix]=255;
}