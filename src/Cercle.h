#ifndef CERCLE_H
#define CERCLE_H

#include <string>
#include <vector>
#include <iostream>
#include "Figure.h"



// class Cercle
class Cercle: public Figure {
public :
	Cercle();     // Constructeur
    Cercle(int centreX, int centreY, int rayon);
	~Cercle()     // Destructeur
    {
        std::cout << "Deleting Figure " << Name << std::endl;
    }

// methode
    int getCercleCentreX ()  
    int getCercleCentrey ()  
    int getCercleRayon ()
    std::string Name;
    void tracerCercle(int CentreX, int CentreY);
    
private :
	int centreX;
    int centreY;
    int rayon;
};

#endif /* CERCLE_H */