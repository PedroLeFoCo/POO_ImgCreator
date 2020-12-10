#include "Croix.h"



void Croix::tracerCroix(Point centre,int longueur_h,int longueur_v)
{
    float a;
    int x1,x2;  //Points croix horizontale
    int y1,y2;  //Points croix verticale
    Point trace;

    //D'abord on trace la ligne verticale 
    y1=centre.y-(longueur_v/2);
    y2=centre.y+(longueur_v/2);
    for(int i=y1;i<y2;i++)
    {
        trace.set(centre.x,i);//x,y
        setPoint(trace);
    }

    //Puis la ligne horizontale 
    x1=centre.x-(longueur_h/2);
    x2=centre.x+(longueur_h/2);
    for(int i=x1;i<x2;i++)
    {
        trace.set(i,centre.y);//x,y
        setPoint(trace);
    }

}

