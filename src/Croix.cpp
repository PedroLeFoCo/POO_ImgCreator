#include "Croix.h"

Croix::Croix(int width, int height) //Constructeur de la croix
{
    m_CroixWidth = width;
    m_CroixHeight = height;

    m_FigureImg.resize(m_CroixHeight * m_CroixWidth);
}

void Croix::tracerCroix()   //Methode pour tracer la croix
{
    //On trace le trait vertical 
    for(int i = 0; i<m_CroixHeight; i++)
    {
        int numCharColorWhite = (i*m_CroixWidth) + m_CroixWidth/2 ;
        setPointColorWhite(numCharColorWhite);
    }
    //On trace le trait horizontal
    for(int i = 0; i<m_CroixWidth; i++)
    {
        int numCharColorWhite = i + (m_CroixHeight/2)*m_CroixWidth;
        setPointColorWhite(numCharColorWhite);
    }

}
