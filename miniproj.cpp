#include <iostream>
#include <string>

#include "Drawing.h"
#include "Figure.h"
#include "Segment.h"

const int width = 300;
const int height = 400;

int main(int argc, char **argv) {

  Drawing draw(width, height);
  draw.createTestImage();
  draw.clearImage();
  draw.save(std::string("test_image.bmp"));

  Point A;
  Figure MaFigure(width,height);
  //MaFigure.clearImage();
  for (int i=0; i<=200; i++)
  {  
    A.set(i,i);//x,y
    MaFigure.setPoint(A);
  }
  Point B,C;
  B.set(50,0);
  C.set(150,0);
  
  Segment MonSegment(B,C);
  MonSegment.Constructor(B,C);

  MaFigure.save(std::string("MaFigure.bmp"));
  return 0;
}