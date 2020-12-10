#ifndef CROIX_H
#define CROIX_H

#include <iostream>
#include <string>
#include <vector>
#include "Figure.h"

// Lorsqu'on déclare une classe dérivée, on utilise la syntaxe suivante : 
class Croix : public Figure {
public:
    Croix(int width,int height) : Figure(width, height){

    }
    ~Croix() {
        std::cout << "Deleting Figure " << Name << std::endl;
    }
    std::string Name;
private:
    Point centre;
    int longueur_h;
    int longueur_v;

public:
    //longueur_h => Longueur Trait horizontal
    //longueur_v => Longueur Trait vertical
    void tracerCroix(Point centre,int longueur_h,int longueur_v);

};

#endif /* CROIX_H */