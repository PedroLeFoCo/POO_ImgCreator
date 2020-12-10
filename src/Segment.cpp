#include "Segment.h"

/*//#ifndef STB_IMAGE_WRITE_IMPLEMENTATION
    #define STB_IMAGE_WRITE_IMPLEMENTATION
    #include <stb_image_write.h>
    #include <stdexcept>
#endif
*/
/*Segment::Segment(Point A, Point B)
 {Constructor(A,B);}
*/
void Segment::Constructor(Point A, Point B) //Constructeur qui trace le segment
{
    Point P=A;
   //std::cout << "Constructor loading" << std::endl;
    if (A.x==B.x && A.y!=B.y) //Segment vertical
    {
        if (A.y<B.y)
        {
            for (int i=A.y;i<=B.y;i++)
            {
                P.set(A.x,i);//je "set" les coordonnées du point que je veux tracer
                setPoint(P);//je met la valeur du point a 255
            }
        }
        else
            for (int i= A.y;i>=B.y;i--)
            {
                P.set(A.x,i);
                setPoint(P);//je met la valeur du point a 255
            }
    }
    else if (A.x!=B.x && A.y==B.y) //Segment horizontal
    {
        if (A.x<B.x)
            for (int i=A.x;i<=B.x;i++)
            {
                P.set(i,A.y);
                setPoint(P);
            }
        else
            for (int i=A.x;i>=B.x;i--)
            {
                P.set(i,A.y);
                setPoint(P);
            }
    }
    else if (A.x!=B.x && A.y!=B.y && (B.x-A.x)==(A.y-B.y) && (B.x-A.x)>0)//Segment oblique A/B a 45°
    {
        for (int i=0;i<=(B.x-A.x);i++)
            {
                P.set(A.x+i,A.x-i);
                setPoint(P);
            }
    }
    else if (A.x!=B.x && A.y!=B.y && (B.x-A.x)==(B.y-A.y) && (B.x-A.x)>0)//Segment oblique B/A
    {
        for (int i=A.x;i<=B.x;i++)
            {
                P.set(i,i);
                //std::cout << "Point : " << P.x << "," << P.y << std::endl;
                setPoint(P);
            }
    }
    else if (A.x!=B.x && A.y!=B.y && (A.x-B.x)==(B.y-A.y) && (A.x-B.x)>0)//Segment oblique B/A
    {
        for (int i=(A.x-B.x);i>=0;i--)
            {
                P.set(A.x-i,A.y+i);
                //std::cout << "Point : " << P.x << "," << P.y << std::endl;
                setPoint(P);
            }
    }
    else if (A.x!=B.x && A.y!=B.y && (A.x-B.x)==(A.y-B.y) && (A.x-B.x)>0)//Segment oblique B/A
    {
        for (int i=(A.x-B.x);i>=0;i--)
            {
                P.set(A.x-i,A.y-i);
                //std::cout << "Point : " << P.x << "," << P.y << std::endl;
                setPoint(P);
            }
    }
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