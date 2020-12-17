#ifndef SEGMENT_H
#define SEGMENT_H

#include <string>
#include <vector>
#include <iostream>
#include "Figure.h"

class Segment : public Figure
{
public:
    Segment();
    Segment(int longueur);
    Segment(Point A, Point B);
    ~Segment()
    {
        std::string Name="Segment";
    }

    //Methods
    int getSegmentLongueur(){return m_SegmentLongeur;}
    int getSegmentHauteur(){return m_SegmentHauteur;}
    void tracerSegment();
    void tracerSegmentAB();
public:
    int m_SegmentLongeur;
    int m_SegmentHauteur;
    Point A;
    Point B;
};




#endif /* SEGMENT_H */