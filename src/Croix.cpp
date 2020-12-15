#include "Croix.h"



void Croix::tracerCroix()
{    
    m_Img.resize(m_iWidth * m_iHeight);
    //Dessin de la ligne verticale a partir du centre de la croix
    for(int i=m_Centre.getCoordY()-(m_iLongueur_v/2);i<m_Centre.getCoordY()+(m_iLongueur_v/2);i++)
    {
        //trace.set(m_Centre.x,i);//x,y
        //setPoint();
        setPoint(m_Centre);
    }

    //Dessin de la ligne horizontale a partir du centre de la croix
    for(int i=m_Centre.getCoordX()-(m_iLongueur_h/2);i<m_Centre.getCoordX()+(m_iLongueur_h/2);i++)
    {
        //trace.set(i,m_Centre.y);//x,y
        //setPoint(trace);
        setPoint(m_Centre);
    }
    std::cout<<"Methode tracer CROIX FINIE"<<std::endl;
}

