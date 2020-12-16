#ifndef DRAWING_H
#define DRAWING_H

#include <string>
#include <vector>
#include "Figure.h"
#include "Save.h"

class Drawing {
public:
  Drawing(const int width, const int height);
  Drawing(std::vector<Figure*> VectorFigure,std::vector<Point*> VectorPointOrigine, const int width, const int height);
  ~Drawing();

  void save(std::string filename);
  void clearImage();
  void createTestImage();
  void DrawFigure();

protected:
  const int m_DrawingWidth;
  const int m_DrawingHeight;
  std::vector<char> m_DrawingImage;
  std::vector<Figure*> m_VectorFigures;
  std::vector<Point *> m_VectorPointsOrigine;
  Figure *m_DrawingFigure;
  Point *m_DrawingPointOrigine;
};

#endif /* DRAWIN_H */