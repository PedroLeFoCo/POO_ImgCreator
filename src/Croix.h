#ifndef CROIX_H
#define CROIX_H

#include <iostream>
#include <string>
#include <vector>
#include "Figure.h"

class Croix : public Figure {
public:
    Croix(int width,int height);//Constructeur
    ~Croix() {                  //Destructeur
        std::cout << "Deleting Figure " << Name << std::endl;
    }

    //Getters
    int getCroixWidth(){return m_CroixWidth;}//On recupere la largeur de la croix
    int getCroixHeight(){return m_CroixHeight;}//On recupere la hauteur de la croix
    std::string Name;
private:
    //Membres
    int m_CroixWidth;
    int m_CroixHeight;

public:
    void tracerCroix();//Methode pour tracer la croix

};

#endif /* CROIX_H */