#ifndef FIGURE_H
#define FIGURE_H

//#define STB_IMAGE_WRITE_IMPLEMENTATION
//#include <stb_image_write.h>
//#include <stdexcept>


#include <string>
#include <vector>
#include "Save.h"
#include "Point.h"

class Croix;
class Rectangle;

// Lorsqu'on déclare une classe dérivée, on utilise la syntaxe suivante : 
class Figure //: public Drawing 
{
public:
    Figure(Croix *uneCroix);    //Constructeur de figure instancie croix
    Figure(Rectangle *unRectangle); //Constructeur...Rectangle
    Figure(int width, int height); //Constructeur...Rectangle
    Figure();
    ~Figure();

    std::string Name;
    void save(std::string filename);
    int getWidth();
    int getHeight();
    char getPointValue(int x, int y);
    void setPoint(Point P);

protected:
    void clearFigure();

    char TransparentColor =0 ;     
    std::vector<char> img;
//protected:
    int m_iWidth;
    int m_iHeight;
    //Point m_Coord;
    //Croix m_MaCroix;
};



#endif /* FIGURE_H */