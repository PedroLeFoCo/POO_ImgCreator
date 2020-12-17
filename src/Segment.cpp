#include "Segment.h"

/*//#ifndef STB_IMAGE_WRITE_IMPLEMENTATION
    #define STB_IMAGE_WRITE_IMPLEMENTATION
    #include <stb_image_write.h>
    #include <stdexcept>
#endif
*/
Segment::Segment()
{

}

Segment::Segment(int longueur)
{
    m_SegmentLongeur = longueur;
    m_SegmentHauteur = 1;
    m_FigureImg.resize(m_SegmentLongeur*m_SegmentHauteur);    
}

void Segment::tracerSegment()
{
    //Tracer un segment

    //On trace le trait vertical de la croix
    std::cout<<"In method: tracerSegment()"<<m_SegmentLongeur<<std::endl;

    for(int i = 0; i<m_SegmentLongeur; i++)
    {
        int numCharColorWhite = i;
        setPointColorWhite(numCharColorWhite);
    }
}

Segment::Segment(Point *C, Point *D)
{
    A.setPointCoordX(C->getPointCoordX());
    A.setPointCoordY(C->getPointCoordY());
    B.setPointCoordX(D->getPointCoordX());
    B.setPointCoordY(D->getPointCoordY());

    
    if (A.getPointCoordX()==B.getPointCoordX() && A.getPointCoordY()!=B.getPointCoordY()) //Segment vertical
    {
        m_SegmentLongeur = 1;
        if (A.getPointCoordY()<B.getPointCoordY())
        {
            m_SegmentHauteur = B.getPointCoordY()-A.getPointCoordY();
            A.setPointCoordX(0);
            A.setPointCoordY(0);
            B.setPointCoordX(0);
            B.setPointCoordY(m_SegmentHauteur);
        }
        else
        {
            m_SegmentHauteur = A.getPointCoordY()-B.getPointCoordY();
            A.setPointCoordX(0);
            A.setPointCoordY(0);
            B.setPointCoordX(0);
            B.setPointCoordY(m_SegmentHauteur);
        }
    }
    else if (A.getPointCoordX()!=B.getPointCoordX() && A.getPointCoordY()==B.getPointCoordY()) //Segment horizontal
    {
        m_SegmentHauteur=1;
        if (A.getPointCoordX()<B.getPointCoordX())
        {
            m_SegmentLongeur = B.getPointCoordX()-A.getPointCoordX();
            A.setPointCoordX(0);
            A.setPointCoordY(0);
            B.setPointCoordX(m_SegmentLongeur);
            B.setPointCoordY(0);
        }
        else
        {
            m_SegmentLongeur = A.getPointCoordX()-B.getPointCoordX();
            A.setPointCoordX(0);
            A.setPointCoordY(0);
            B.setPointCoordX(m_SegmentLongeur);
            B.setPointCoordY(0);
        }
    }
    
    else //Segment oblique
    {
        if (A.getPointCoordX()<B.getPointCoordX() && A.getPointCoordY()<B.getPointCoordY()) //A\B
        {
            m_SegmentLongeur = B.getPointCoordX()-A.getPointCoordX();
            m_SegmentHauteur = B.getPointCoordY()-A.getPointCoordY();
            A.setPointCoordX(0);
            A.setPointCoordY(0);
            B.setPointCoordX(B.getPointCoordX()-A.getPointCoordX());
            B.setPointCoordY(B.getPointCoordY()-A.getPointCoordY());
        }
        else if (A.getPointCoordX()<B.getPointCoordX() && A.getPointCoordY()>B.getPointCoordY()) // A/B
        {
            m_SegmentLongeur = A.getPointCoordX()-B.getPointCoordX();
            A.setPointCoordX(0);
            A.setPointCoordY(B.getPointCoordY()-A.getPointCoordY());
            B.setPointCoordX(B.getPointCoordX()-A.getPointCoordX());
            B.setPointCoordY(0);
        }
        if (A.getPointCoordY()<B.getPointCoordY())
            m_SegmentHauteur = B.getPointCoordY()-A.getPointCoordY();
        else
            m_SegmentHauteur = A.getPointCoordY()-B.getPointCoordY();
    }
    m_FigureImg.resize(m_SegmentLongeur*m_SegmentHauteur);
    m_iFigureWidth=m_SegmentLongeur;
    m_iFigureHeight=m_SegmentHauteur;
}
void Segment::tracerSegmentAB()
{
    Point P;
    std::cout<<"W & H = " << m_iFigureWidth << ":" << m_iFigureHeight << std::endl;
    P.setPointCoordX(A.getPointCoordX());
    P.setPointCoordY(A.getPointCoordY());
    std::cout << "tracerSegmentAB loading" << std::endl;
    if (A.getPointCoordX()==B.getPointCoordX() && A.getPointCoordY()!=B.getPointCoordY()) //Segment vertical
    {
        if (A.getPointCoordY()<B.getPointCoordY())
        {
            //for (int i=A.getPointCoordY();i<=B.getPointCoordY();i++)
            for (int i=0;i<B.getPointCoordY()-A.getPointCoordY();i++)
            {
                //P.setPointCoordX(A.getPointCoordX());
                P.setPointCoordX(0);
                P.setPointCoordY(i);
                setPointColorWhite(P.getPointCoordX(), P.getPointCoordY());
                std::cout<<getPointColorWhite(m_SegmentLongeur, 0,i)<< " ";
            }
        }
        else
            //for (int i= A.getPointCoordY();i>=B.getPointCoordY();i--)
            for (int i=0;i<A.getPointCoordY()-B.getPointCoordY();i++)
            {
                //P.setPointCoordX(A.getPointCoordX());
                P.setPointCoordX(0);
                P.setPointCoordY(i);
                setPointColorWhite(P);
            }
    }
    else if (A.getPointCoordX()!=B.getPointCoordX() && A.getPointCoordY()==B.getPointCoordY()) //Segment horizontal
    {
        if (A.getPointCoordX()<B.getPointCoordX())
            for (int i=0;i<=B.getPointCoordX()-A.getPointCoordX();i++)
            {
                P.setPointCoordX(i);
                //P.setPointCoordY(A.getPointCoordY());
                P.setPointCoordY(0);
                setPointColorWhite(P);
            }
        else
            //for (int i=A.getPointCoordX();i>=B.getPointCoordX();i--)
            for (int i=0;i>=A.getPointCoordX()-B.getPointCoordX();i--)
            {
                P.setPointCoordX(i);
                //P.setPointCoordY(A.getPointCoordY());
                P.setPointCoordY(0);
                setPointColorWhite(P);
            }
    }
    else if (A.getPointCoordX()!=B.getPointCoordX() && A.getPointCoordY()!=B.getPointCoordY() && (B.getPointCoordX()-A.getPointCoordX())==(A.getPointCoordY()-B.getPointCoordY()) && (B.getPointCoordX()-A.getPointCoordX())>0)//Segment oblique A/B
    {
        for (int i=0;i<=(B.getPointCoordX()-A.getPointCoordX());i++)
        {
            
            //P.setPointCoordX(A.getPointCoordX()+i);
            //P.setPointCoordY(A.getPointCoordY()-i);
            P.setPointCoordX(i);
            P.setPointCoordY(A.getPointCoordY()-i);
            std::cout << "tracerSegmentAB X=" <<A.getPointCoordX()+i <<" Y=" <<A.getPointCoordY()-i << std::endl;
            setPointColorWhite(P);
        }
    }
    else if (A.getPointCoordX()!=B.getPointCoordX() && A.getPointCoordY()!=B.getPointCoordY() && (B.getPointCoordX()-A.getPointCoordX())==(B.getPointCoordY()-A.getPointCoordY()) && (B.getPointCoordX()-A.getPointCoordX())>0)//Segment oblique B/A
    {
        for (int i=A.getPointCoordX();i<=B.getPointCoordX();i++)
        {
            P.setPointCoordX(i);
            P.setPointCoordY(i);
            //std::cout << "Point : " << P.getPointCoordX() << "," << P.getPointCoordY() << std::endl;
            std::cout << "tracerSegmentAB X=" <<i <<" Y=" <<i << std::endl;
            setPointColorWhite(P);
        }
    }
    else if (A.getPointCoordX()!=B.getPointCoordX() && A.getPointCoordY()!=B.getPointCoordY() && (A.getPointCoordX()-B.getPointCoordX())==(B.getPointCoordY()-A.getPointCoordY()) && (A.getPointCoordX()-B.getPointCoordX())>0)//Segment oblique B/A
    {
        for (int i=(A.getPointCoordX()-B.getPointCoordX());i>=0;i--)
        {
            P.setPointCoordX(A.getPointCoordX()-i);
            P.setPointCoordY(A.getPointCoordY()+i);
            //std::cout << "Point : " << P.getPointCoordX() << "," << P.getPointCoordY() << std::endl;
            std::cout << "tracerSegmentAB X=" <<A.getPointCoordX()-i <<" Y=" <<A.getPointCoordY()+i << std::endl;
            setPointColorWhite(P);
        }
    }
    else if (A.getPointCoordX()!=B.getPointCoordX() && A.getPointCoordY()!=B.getPointCoordY() && (A.getPointCoordX()-B.getPointCoordX())==(A.getPointCoordY()-B.getPointCoordY()) && (A.getPointCoordX()-B.getPointCoordX())>0)//Segment oblique B/A
    {
        for (int i=(A.getPointCoordX()-B.getPointCoordX());i>=0;i--)
        {
            P.setPointCoordX(A.getPointCoordX()-i);
            P.setPointCoordY(A.getPointCoordY()-i);
            //std::cout << "Point : " << P.getPointCoordX() << "," << P.getPointCoordY() << std::endl;
            std::cout << "tracerSegmentAB X=" <<A.getPointCoordX()-i <<" Y=" <<A.getPointCoordY()-i << std::endl;
            setPointColorWhite(P);
        }
    }
}

