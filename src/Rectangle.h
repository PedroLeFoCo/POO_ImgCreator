#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <vector>
#include <iostream>

#include "Figure.h"
#include "Point.h"

class Rectangle : public Figure
{
    public:
        Rectangle(int width,int height){
            m_iLongueur_v=height;
            m_iLongueur_h=width;
        }
        ~Rectangle()        //destructeur
        {
            std::cout << "Deleting Figure " << Name << std::endl;
        }
        std::string Name;
        int getLongueur_h(){return m_iLongueur_h;}
        int getLongueur_v(){return m_iLongueur_v;}
    private:
        Point m_PointAngleBasGauche;
        int m_iLongueur_h;  //Membre de la classe Croix -> Longueur Trait Horizontal    
        int m_iLongueur_v;  //Membre de la classe Croix -> Longueur Trait Vertical

    public:
    void tracerRectangle(); 
};
#endif /* RECTANGLE_H */