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
  //draw.clearImage();
  draw.save(std::string("test_image.bmp"));

  Point A;
  Figure MaFigure(width,height);
  //MaFigure.clearImage();
  for (int i=0; i<=200; i++)
  {  
    A.set(i,i);//x,y
    MaFigure.setPoint(A);
  }
    MaFigure.save(std::string("MaFigure.bmp"));
  Point B,C;
  B.set(50,50);
  C.set(50,250);
  Segment MonSegment(width,height, B,C);

  //MonSegment.Constructor(B,C);
  MonSegment.save(std::string("Monsegment.bmp"));

  for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++) {
      //std::cout << "Point : " << i << "," << j << " --> " << MonSegment.getPointValue(i,j) << std::endl;
      if (MonSegment.getPointValue(i,j) == -1)
      {
        //std::cout << "Point : " << i << "," << j << std::endl;
          //B.set(i,j);
        //draw.setPoint(B);
        draw.image[(j * width) + i]=255;
      }
      //else
        //std::cout << "Point : " << i << "," << j << ">>" << MonSegment.getPointValue(i,j) << std::endl;
        
    }
  }
  draw.save(std::string("test_image2.bmp"));


  return 0;
}