#ifndef FIGURE_H
#define FIGURE_H

#include "Drawing.h"

class Point
{
    public:
        Point(int x=0, int y=0); //constructeur
        ~Point();//destructeur
        void set(int x, int y);
    int x;
    int y;
};

// Lorsqu'on déclare une classe dérivée, on utilise la syntaxe suivante : 
class Figure : public Drawing {
public:
    Figure(const int width, const int height) : Drawing(width, height){
        clearImage();
    }
    ~Figure() {
        std::cout << "Deleting Figure " << Name << std::endl;
    }
    std::string Name;
public:
    char TransparentColor =0 ; 
    void setPoint(Point P);
    const std::vector<char> img();

};



#endif /* FIGURE_H */