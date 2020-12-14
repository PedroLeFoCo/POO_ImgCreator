#ifndef CROIX_H
#define CROIX_H

#include <iostream>
#include <string>
#include <vector>

#include "Figure.h"

// Lorsqu'on déclare une classe dérivée, on utilise la syntaxe suivante : 
class Croix : public Figure {
public:
    Croix(int width,int height) {
        m_iLongueur_v=height;
        m_iLongueur_h=width;
        m_Centre.setCoordX(m_iLongueur_h);
        m_Centre.setCoordY(m_iLongueur_v);
    }
    ~Croix() {
        std::cout << "Deleting Figure " << Name << std::endl;
    }
    std::string Name;
    int getLongueur_h(){return m_iLongueur_h;}
    int getLongueur_v(){return m_iLongueur_v;}

private:
    Point m_Centre;
    int m_iLongueur_h;  //Membre de la classe Croix -> Longueur Trait Horizontal    
    int m_iLongueur_v;  //Membre de la classe Croix -> Longueur Trait Vertical

public:
    void tracerCroix();

};

#endif /* CROIX_H */