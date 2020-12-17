#ifndef CARRE_H
#define CARRE_H

#include <string>
#include <vector>
#include "Figure.h"
#include <iostream>

class Carre : public Figure
{
public:
    Carre(int cote);    //Constructeur
    ~Carre()        //Destructeur
    {
        std::cout << "Deleting Figure " << std::endl;
    }
    //Methods
    void tracerCarre(); //Methode pour tracer un carre
    //Getter
    int getCarreCote(){return m_CarreCote;}//Recuperer la taille d'un cote du carre

private:
    //Membres
    int m_CarreCote;
};
#endif /* CARRE_H */