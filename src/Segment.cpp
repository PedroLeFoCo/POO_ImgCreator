#include "Segment.h"


/*Segment::Segment(Point A, Point B)
 {Constructor(A,B);}
*/
void Segment::Constructor(Point A, Point B) //Constructeur
{
    
    Point P(0,0);
    if (A.x>B.x) P.x=A.x; else P.x=B.x;
    if (A.y>B.y) P.y=A.y; else P.y=B.y;
    std::cout << "P.x=" << P.x << std::endl;
    std::cout << "P.y=" << P.y << std::endl;
    
    image.resize((P.x +1) * (P.y+1));
    std::cout << "image Width = " << getWidth() << std::endl;
    std::cout << "image Height = " << getHeight() << std::endl;
    
    P=A;
    std::cout << "Constructor P : " << P.x <<"," << P.y << std::endl;
    std::cout << "Constructor B : " << B.x <<"," << B.y << std::endl;
                
    //std::cout << "Constructor loading" << std::endl;
    if (A.x==B.x && A.y!=B.y) //Segment vertical
    {
        if (A.y<B.y)
        {
            for (int i=A.y;i<=B.y;i++)
            {
                P.set(A.x,i);
                setPoint(P);
            }
        }
        else
            for (int i= A.y;i>=B.y;i--)
            {
                P.set(A.x,i);
                setPoint(P);
            }
    }
    else if (A.x!=B.x && A.y==B.y) //Segment horizontal
    {
        if (A.x<B.x)
            for (int i=A.x;i<=B.x;i++)
            {
                P.set(i,A.y);
                //std::cout << "Constructor P : " << P.x << std::endl;
                setPoint(P);
            }
        else
            for (int i=A.x;i>=B.x;i--)
            {
                P.set(i,A.y);
                setPoint(P);
            }
    }
    std::cout << "Constructor End" << std::endl;
    
}

Segment::~Segment()
{}

/*void tracerSegment(Point A, Point B)
{
    int dx, dy;
    if ((dx=B.x-A.x)!=0)
    {
        if (dx>0)
        {
            if ((dy=B.y-A.y)!=0)
            {
                if (dy>0) //vecteur oblique dans le 1er cadran
                {
                    if (dx>dy) //vecteur diagonal ou oblique proche horizontale 1er cadran
                    {
                        int e;
                        e=dx;
                        dx=2*e;
                        dy=dy*2; //e est positif
                        
                    }
                }
            }
        }
    }
}*/