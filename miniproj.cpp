#include <iostream>
#include <string>

#include "Drawing.h"
#include "Figure.h"

const int width = 300;
const int height = 400;

int main(int argc, char **argv) {

  /*Drawing draw(width, height);
  draw.createTestImage();
  draw.clearImage();
  draw.save(std::string("test_image.bmp"));
*/
  Figure MaFigure(200,190);
  //MaFigure.clearImage();
  for (int i=1; i<200; i++)
    MaFigure.setPoint(i,i);
  MaFigure.save(std::string("MaFigure.bmp"));
  return 0;
}