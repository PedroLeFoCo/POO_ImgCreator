#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include <vector>
#include "Point.h"

class Rectangle;
class Segment;
class Croix;
class Carre;

// Lorsqu'on déclare une classe dérivée, on utilise la syntaxe suivante : 
class Figure //: public Drawing 
{
public:
    //Figure(int width, int height, Point coord);//: width(width), height(height), coord(coord) {}// : Drawing(width, height)
    Figure();//Default Constructor
    Figure(Rectangle* rectangle);
    Figure(Carre* carre);
    Figure(Croix* croix);
    Figure(Segment* segment);
    ~Figure();

    std::string Name;
    //Methods
    void save(std::string filename, int figureWidth, int figureHeight);
    void clearFigure();
    //Getters
    int getFigureWidth(){return m_iFigureWidth;}    //On recupere la largeur de l'image
    int getFigureHeight(){return m_iFigureHeight;}  //On recupere la hauteur de l'image
    char getPointColorWhite(int rectangleLargeur, int x , int y);

    //Setters
    void setPointColorWhite(int numCharColorWhite); //On écrit une valeur 255 (Blanc) dans un pixel donné
    void setPointColorWhite(int x, int y);
    void setPointColorWhite(Point P);
protected:
    std::vector<char> m_FigureImg;
    Point *m_pFigureCoord;
    int m_iFigureWidth;
    int m_iFigureHeight;
};



#endif /* FIGURE_H */