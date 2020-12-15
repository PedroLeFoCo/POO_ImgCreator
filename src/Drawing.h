#ifndef DRAWING_H
#define DRAWING_H

#include <string>
#include <vector>
#include "Figure.h"

class Drawing {
public:
  Drawing(const int width, const int height);
  ~Drawing();

  void save(std::string filename);

//private:
  void clearImage();
  void createTestImage();
  void DrawFigure();

//private:
  const int width;
  const int height;

  //Figure m_Figure;

  std::vector<char> image;
  std::vector<Figure*> ListeFigure;
};

#endif /* DRAWIN_H */