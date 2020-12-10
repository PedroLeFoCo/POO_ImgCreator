#ifndef FIGURE_H
#define FIGURE_H

//#define STB_IMAGE_WRITE_IMPLEMENTATION
//#include <stb_image_write.h>
//#include <stdexcept>


#include <string>
#include <vector>

class Point
{
    public:
        Point(int x=0, int y=0); //constructeur
        ~Point();//destructeur
        void set(int x, int y);
    int x;
    int y;
};

// Lorsqu'on déclare une classe dérivée, on utilise la syntaxe suivante : 
class Figure //: public Drawing 
{
public:
    Figure(int width, int height, Point coord);//: width(width), height(height), coord(coord) {}// : Drawing(width, height)
    ~Figure();

    std::string Name;
    void save(std::string filename);
    int getWidth();
    int getHeight();
    char getPointValue(int x, int y);

//protected:
    void clearFigure();

    char TransparentColor =0 ; 
    void setPoint(Point P);
    std::vector<char> img;
//protected:
    const int width;
    const int height;
    Point coord;
};



#endif /* FIGURE_H */