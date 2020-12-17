#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <vector>
#include <iostream>
#include "Figure.h"

class Rectangle : public Figure
{
public:
    Rectangle();//Constructeur de rectangle
    Rectangle(int width, int height);//Constructeur de rectangle -> A partir d'une largeur et hauteur
    ~Rectangle();        //destructeur
    
    //Getters
    int getRectangleHeight(){return m_iRectangleHeight;}//On recupere une hauteur 
    int getRectangleWidth(){return m_iRectangleWidth;}//On recupere une largeur
    //Methods
    void tracerRectangle(); 
protected:
    Point *m_PointRectangle;
    int m_iRectangleHeight;
    int m_iRectangleWidth;
};

#endif /* RECTANGLE_H */