#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <vector>

#include "Drawing.h"
#include "Figure.h"

class Rectangle : public Figure
{
    public:
        //Segment(std::string Name) : Figure(Name)
        Rectangle(const int width, const int height, Point A, Point B) : Figure (width, height)
        {
            Constructor( A,  B);
        };
        void Constructor(Point A, Point B);
    public:
        ~Rectangle();
         std::string Name="Rectangle";
        Point A;
        Point B;
};



#endif /* RECTANGLE_H */