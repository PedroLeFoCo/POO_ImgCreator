#ifndef DRAWING_H
#define DRAWING_H

#include <string>
#include <vector>
#include "Figure.h"
#include "Save.h"

class Drawing {
public:
  Drawing(const int width, const int height);//Constructeur de drawing

  //Constructeur de drawing -> Vecteur de figures ; Vecteur de point d'origine des figures ; largeur d'image ; Hauteur d'image
  Drawing(std::vector<Figure*> VectorFigure,std::vector<Point*> VectorPointOrigine, const int width, const int height);

  ~Drawing();//Destructeur

    void save(std::string filename);
    void clearImage();
    void createTestImage();
    void DrawFigure();

protected:
    //Membres
    const int m_DrawingWidth;
    const int m_DrawingHeight;
    std::vector<char> m_DrawingImage;//Vecteur de pixels de l'image
    std::vector<Figure*> m_VectorFigures;//Vecteur de figures de l'image
    std::vector<Point *> m_VectorPointsOrigine;//Vecteur contenant les points d'origine des figures
    Figure *m_DrawingFigure;//Figure
    Point *m_DrawingPointOrigine;//Point d'origine d'une figure
};

#endif /* DRAWIN_H */