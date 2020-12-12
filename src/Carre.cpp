#include "Carre.h"

void Carre::tracerCarre(Point AngleBasGauche, int cote) //Constructeur qui trace le carre
{
    float a;   
    int x1,x2;  //Coordonnées en abscisse des angles du carre
    int y1,y2;  //Coordonnées en ordonnée des angles du carre
    Point trace;

                                            //  _
    x1=AngleBasGauche.x;
    x2=x1+cote;

    for(int i=x1; i<x2; i++)
    {
        trace.set(i,AngleBasGauche.y);
        setPoint(trace);
    }

                                            //  |_
    y1=AngleBasGauche.y;
    y2=y1+cote;

    for(int i=y1; i<y2; i++)
    {
        trace.set(AngleBasGauche.x,i);
        setPoint(trace);
    }
                                            //   _
                                            //  |_
    x1=AngleBasGauche.x;
    x2=x1+cote;
    y1=AngleBasGauche.y;
    y2=y1+cote;

    for(int i=x1; i<x2; i++)
    {
        trace.set(i,y2);
        setPoint(trace);
    }

                                            //   _
                                            //  |_|
    x1=AngleBasGauche.x;
    x2=x1+cote;
    y1=AngleBasGauche.y;
    y2=y1+cote;

    for(int i=y1; i<y2; i++)
    {
        trace.set(x2,i);
        setPoint(trace);
    }

}