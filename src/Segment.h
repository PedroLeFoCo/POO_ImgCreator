#ifndef SEGMENT_H
#define SEGMENT_H

#include <iostream>
#include "Drawing.h"


class Point
{
    public:
        Point(int x=0, int y=0); //constructeur
        ~Point();//destructeur
        void set(int x, int y);
    int x;
    int y;
};

class Segment
{
    public:
        Segment(Point A, Point B);
        ~Segment();
    Point A;
    Point B;
};


#endif /* SEGMENT_H */