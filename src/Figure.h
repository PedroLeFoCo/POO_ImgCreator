#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include <vector>
#include "Point.h"

class Rectangle;
class Segment;
class Croix;
class Carre;

class Figure //: public Drawing 
{
public:
    Figure();//Default Constructor
    Figure(Rectangle* rectangle);//Constructeur -> Rectangle
    Figure(Carre* carre);//Constructeur -> Carre
    Figure(Croix* croix);//Constructeur -> Croix
    Figure(Segment* segment);//Constructeur -> Segment
    ~Figure();//Destructeur

    std::string Name;
    //Methods
    void save(std::string filename, int figureWidth, int figureHeight);
    void clearFigure();
    //Getters
    int getFigureWidth(){return m_iFigureWidth;}    //On recupere la largeur de l'image
    int getFigureHeight(){return m_iFigureHeight;}  //On recupere la hauteur de l'image
    char getPointColorWhite(int rectangleLargeur, int x , int y);//On recupere un point blanc de l'image

    //Setters
    void setPointColorWhite(int numCharColorWhite); //On écrit une valeur 255 (Blanc) dans un pixel donné
    void setPointColorWhite(int x, int y);//On écrit une valeur 255 (Blanc) dans une coordonnee donnee (correspondant a un pixel)
    void setPointColorWhite(Point P);//On écrit une valeur 255 (Blanc) dans un point donnee (correspondant a un pixel)
protected:
    std::vector<char> m_FigureImg;//Image de la figure -> Est heritee aux figures
    Point *m_pFigureCoord;//Coordonnee d'une figure
    int m_iFigureWidth;//Largeur de la figure ->En fonction des dimensions de croix, rectangle, etc.
    int m_iFigureHeight;//Hauteur de la figure -> En fonction des dimensions de croix, rectangle, etc.
};



#endif /* FIGURE_H */