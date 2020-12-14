#include "Croix.h"



void Croix::tracerCroix()
{

    //Dessin de la ligne verticale a partir du centre de la croix
    for(int i=m_Centre.getCoordY()-(m_iLongueur_v/2);i<m_Centre.getCoordY()+(m_iLongueur_v/2);i++)
    {
        //trace.set(m_Centre.x,i);//x,y
        //setPoint();
        m_Centre.setPoint(m_iLongueur_v);
    }

    //Dessin de la ligne horizontale a partir du centre de la croix
    for(int i=m_Centre.getCoordX()-(m_iLongueur_h/2);i<m_Centre.getCoordX()+(m_iLongueur_h/2);i++)
    {
        //trace.set(i,m_Centre.y);//x,y
        //setPoint(trace);
        m_Centre.setPoint(m_iLongueur_h);
    }

}

