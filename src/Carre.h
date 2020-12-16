#ifndef CARRE_H
#define CARRE_H

#include <string>
#include <vector>
#include "Figure.h"
#include <iostream>

class Carre : public Figure
{
public:
    Carre(int cote);
    ~Carre()        //destructeur
    {
        std::cout << "Deleting Figure " << std::endl;
    }
    //Methods
    void tracerCarre(); 
    //Getter
    int getCarreCote(){return m_CarreCote;}

private:
    int m_CarreCote;
};
#endif /* CARRE_H */