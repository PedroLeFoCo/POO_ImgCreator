#include "Croix.h"

Croix::Croix(int width, int height)
{
    std::cout<<"In Croix Constructor"<<std::endl;
    m_CroixWidth = width;
    m_CroixHeight = height;

    m_FigureImg.resize(m_CroixHeight * m_CroixWidth);
    std::cout<<"After Resize"<<std::endl;
}

void Croix::tracerCroix()
{
    //Tracer la croix
    //On trace le trait horizontal de la croix
    for(int i = 0; i<m_CroixWidth; i++)
    {
        int numCharColorWhite = i * m_CroixWidth + m_CroixHeight/2;
        setPointColorWhite(numCharColorWhite);
    }
    //On trace le trait vertical de la croix
    for(int i = 0; i<m_CroixHeight; i++)
    {
        int numCharColorWhite = i + m_CroixHeight/2;
        setPointColorWhite(numCharColorWhite);
    }
}
