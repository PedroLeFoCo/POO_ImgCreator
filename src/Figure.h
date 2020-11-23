#ifndef FIGURE_H
#define FIGURE_H

#include "Drawing.h"

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
    void setPoint(int x, int y);
    const std::vector<char> img();

};



#endif /* FIGURE_H */