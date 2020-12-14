#include "Rectangle.h"

void Rectangle::tracerRectangle() //Constructeur qui trace le rectangle
{
    float a;   
    //Point trace(0,0);
    m_PointAngleBasGauche.setCoordX(0);
    m_PointAngleBasGauche.setCoordY(0);
                                            //  _

    for(int i=m_PointAngleBasGauche.getCoordX(); i<m_PointAngleBasGauche.getCoordX()+m_iLongueur_h; i++)
    {
        //trace.set(i,m_PointAngleBasGauche.y);
        //setPoint(trace);
        m_PointAngleBasGauche.setPoint(m_iLongueur_h);
    }

                                            //  |_

    for(int i=m_PointAngleBasGauche.getCoordY(); i<m_PointAngleBasGauche.getCoordY()+m_iLongueur_v; i++)
    {
        //trace.set(m_PointAngleBasGauche.x,i);
        //setPoint(trace);
        m_PointAngleBasGauche.setPoint(m_iLongueur_v);
    }
                                            //   _
                                            //  |_

    for(int i=m_PointAngleBasGauche.getCoordX(); i<m_PointAngleBasGauche.getCoordX()+m_iLongueur_h; i++)
    {
        //trace.set(i,y2);
        //setPoint(trace);
        m_PointAngleBasGauche.setPoint(m_iLongueur_h);
    }

                                            //   _
                                            //  |_|

    for(int i=m_PointAngleBasGauche.getCoordY(); i<m_PointAngleBasGauche.getCoordY()+m_iLongueur_v; i++)
    {
        //trace.set(x2,i);
        //setPoint(trace);
        m_PointAngleBasGauche.setPoint(m_iLongueur_v);
    }

}