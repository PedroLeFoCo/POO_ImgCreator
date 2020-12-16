#ifndef CROIX_H
#define CROIX_H

#include <iostream>
#include <string>
#include <vector>
#include "Figure.h"

// Lorsqu'on déclare une classe dérivée, on utilise la syntaxe suivante : 
class Croix : public Figure {
public:
    Croix(int width,int height);
    ~Croix() {
        std::cout << "Deleting Figure " << Name << std::endl;
    }

    //Methods
    int getCroixWidth(){return m_CroixWidth;}
    int getCroixHeight(){return m_CroixHeight;}
    std::string Name;
private:
    int m_CroixWidth;
    int m_CroixHeight;

public:
    void tracerCroix();

};

#endif /* CROIX_H */