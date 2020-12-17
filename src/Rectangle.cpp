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
    //On part de 0 on parcourt la largeur du rectangle
    for(int i=0; i<m_iRectangleHeight; i++)
    {
        //On parcout la hauteur du rectangle
        for(int j=0; j<m_iRectangleWidth; j++)
        {
            //passe le pixel correspondant au point en blanc
            int numCharColorWhite = i * m_iRectangleWidth +j;
            setPointColorWhite(numCharColorWhite);
            //std::cout<<getPointColorWhite(getFigureWidth(),i,j)<<std::endl;            
        }
    }
}