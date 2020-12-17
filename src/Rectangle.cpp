#include "Rectangle.h"
#include "Figure.h"

Rectangle::Rectangle()
{
    
}

Rectangle::~Rectangle()
{
    std::cout << "Deleting Figure " << std::endl;
}

Rectangle::Rectangle(int width,int height)
{
    //Longueur et largeur du rectangle
    m_iRectangleWidth = width;
    m_iRectangleHeight = height;

    //Resize de l'image du rectangle
    m_FigureImg.resize(m_iRectangleWidth * m_iRectangleHeight);
}

void Rectangle::tracerRectangle() //Constructeur qui trace le rectangle
{
    int i,j; // i=x=horizontal et j=y=vertical
    //On part de 0 on parcourt la largeur du rectangle
    for(i=0; i<m_iRectangleWidth; i++)
    {
        j=0;
        setPointColorWhite(j * m_iRectangleWidth +i);//bord haut
        j=m_iRectangleHeight-1;
        setPointColorWhite(j * m_iRectangleWidth +i); // Bord bas
    }
    //On parcout la hauteur du rectangle
    for(j=0; j<m_iRectangleHeight; j++)
    {
        i=0;
        setPointColorWhite( j * m_iRectangleWidth +i);//bord gauche
        i=m_iRectangleWidth-1;
        setPointColorWhite( j * m_iRectangleWidth +i);//bord droit
        //std::cout<<getPointColorWhite(getFigureWidth(),i,j)<<std::endl;            
    }
}