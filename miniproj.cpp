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
Point A;
  Figure MaFigure(200,200);
  //MaFigure.clearImage();
  for (int i=0; i<=200; i++)
  {  
    A.set(i,i);
    MaFigure.setPoint(A);
  }
  MaFigure.save(std::string("MaFigure.bmp"));
  return 0;
}