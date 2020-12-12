#ifndef CARRE_H
#define CARRE_H

#include <string>
#include <vector>
#include "Figure.h"
#include <iostream>
#include "Rectangle.h"

class Carre : public Rectangle
{
    public:
        Carre(int width,int height) : Rectangle (width, height)
        {
        
        }
        ~Carre()        //destructeur
        {
            std::cout << "Deleting Figure " << Name << std::endl;
        }
        std::string Name;
    private:
        Point AngleBasGauche;
        int cote;

    public:
    void tracerCarre(Point AngleBasGauche, int cote); 
};
#endif /* CARRE_H */