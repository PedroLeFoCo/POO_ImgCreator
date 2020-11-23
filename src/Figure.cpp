
#include <iostream>
#include "Figure.h"

// Lorsqu'on déclare une classe dérivée, on utilise la syntaxe suivante : 
class Figure : public Drawing {
    public:
        Figure()

        Chien(std::string nom) : Animal(nom) {
            nombreDePatte = 4;
            std::cout << "Je suis un chien" << std::endl;
            afficherNombrePatte();
    }
};

void carre(Drawing MonImage, int size, int color)
{
    if (size>MonImage.width || size>MonImage.height)
        std::cout << "La taille du carre depasse la taille de l'image" << std::endl;
    else
    {
        for (int j = 0; j < MonImage.height; j++) 
        {
            for (int i = 0; i < MonImage.width; i++) 
            {
                if (i<=size && j <=size) MonImage[j * MonImage.width + i] = color;
            }
        }
    }
}