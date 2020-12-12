#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <vector>
#include "Figure.h"
#include <iostream>

class Rectangle : public Figure
{
    public:
        Rectangle(int width,int height) : Figure (width, height)
        {
        
        }
        ~Rectangle()        //destructeur
        {
            std::cout << "Deleting Figure " << Name << std::endl;
        }
        std::string Name;
    private:
        Point AngleBasGauche;
        int longueur_h;
        int largeur_w;

    public:
    void tracerRectangle(Point AngleBasGauche, int longueur_w, int longueur_h); 
};
#endif /* RECTANGLE_H */