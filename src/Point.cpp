#include "Point.h"

Point::Point(){}//Constructeur

Point::Point(int coordX, int coordY)//Constructeur -> Utilisant les coordonnees
{
    m_iPointCoordX=coordX;
    m_iPointCoordY=coordY;
}

Point::~Point()//Destructeur
{
}