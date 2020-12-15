#ifndef POINT_H
#define POINT_H

#include "Figure.h"

class Point : public Figure
{
    public:
        Point(int x=0, int y=0)
        {
            m_ix=x;
            m_iy=y;
        }
        ~Point(){};//destructeur
        void setPoint(int width);
        int getCoordX(){return m_ix;}
        int getCoordY(){return m_iy;}
        void setCoordX(int x){m_ix=x;}
        void setCoordY(int y){m_iy=y;}
    
    private:
        int m_ix;
        int m_iy;
};

#endif