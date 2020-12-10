#ifndef SEGMENT_H
#define SEGMENT_H

#include <iostream>
//#include "Drawing.h"
#include "Figure.h"


class Segment : public Figure
{
    public:
        //Segment(std::string Name) : Figure(Name)
        Segment(const int width, const int height, Point A, Point B) : Figure(width, height, coord){
            Constructor( A,  B);
        };
        void Constructor(Point A, Point B);
    public:
        ~Segment();
         std::string Name="Segment";
        Point A;
        Point B;
};




#endif /* SEGMENT_H */