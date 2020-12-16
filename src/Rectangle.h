#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <vector>
#include <iostream>
#include "Figure.h"

class Rectangle : public Figure
{
public:
    Rectangle();
    Rectangle(int width, int height);
    ~Rectangle();        //destructeur
    
    //Getters
    int getRectangleHeight(){return m_iRectangleHeight;}
    int getRectangleWidth(){return m_iRectangleWidth;}
    //Methods
    void tracerRectangle(); 
protected:
    Point *m_PointRectangle;
    int m_iRectangleHeight;
    int m_iRectangleWidth;
};

#endif /* RECTANGLE_H */