#include "Rectangle.h"

void Rectangle::tracerRectangle(Point AngleBasGauche, int longueur_w, int longueur_h) //Constructeur qui trace le rectangle
{
    float a;   
    int x1,x2;  //Coordonnées en abscisse des angles du rectangle
    int y1,y2;  //Coordonnées en ordonnée des angles du rectangle
    Point trace;

                                            //  _
    x1=AngleBasGauche.x;
    x2=x1+longueur_w;

    for(int i=x1; i<x2; i++)
    {
        trace.set(i,AngleBasGauche.y);
        setPoint(trace);
    }

                                            //  |_
    y1=AngleBasGauche.y;
    y2=y1+longueur_h;

    for(int i=y1; i<y2; i++)
    {
        trace.set(AngleBasGauche.x,i);
        setPoint(trace);
    }
                                            //   _
                                            //  |_
    x1=AngleBasGauche.x;
    x2=x1+longueur_w;
    y1=AngleBasGauche.y;
    y2=y1+longueur_h;

    for(int i=x1; i<x2; i++)
    {
        trace.set(i,y2);
        setPoint(trace);
    }

                                            //   _
                                            //  |_|
    x1=AngleBasGauche.x;
    x2=x1+longueur_w;
    y1=AngleBasGauche.y;
    y2=y1+longueur_h;

    for(int i=y1; i<y2; i++)
    {
        trace.set(x2,i);
        setPoint(trace);
    }

}