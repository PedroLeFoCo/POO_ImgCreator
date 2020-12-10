#ifndef DRAWING_H
#define DRAWING_H

//#define STB_IMAGE_WRITE_IMPLEMENTATION
//#include <stb_image_write.h>
//#include <stdexcept>

#include "Figure.h"
#include <string>
#include <vector>

class Drawing {
public:
  Drawing(const int width, const int height);
  ~Drawing();

  void save(std::string filename);
  int getWidth();
  int getHeight();
  char getPointValue(int x, int y);

//protected:
  void clearImage();
  void createTestImage();

private:

public:
  const int width;
  const int height;

  std::vector<char> image;
};

#endif /* DRAWIN_H */