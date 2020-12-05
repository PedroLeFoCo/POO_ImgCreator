#include <iostream>
#include <string>

#include "Drawing.h"
#include "Figure.h"
#include "Segment.h"

const int width = 300;
const int height = 400;

int main(int argc, char **argv) {
  char c;
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
  B.set(150,150);
  C.set(150,250);
  Segment MonSegment(width,height, B,C);

  //MonSegment.Constructor(B,C);
  MonSegment.save(std::string("Monsegment.bmp"));

  for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++) {
      //std::cout << "Point : " << i << "," << j << " --> " << MonSegment.getPointValue(i,j) << std::endl;
      if (c=MonSegment.getPointValue(i,j) != 0)
      {
        std::cout << "Point : " << i << "," << j << "--> " << (int) c << std::endl;
          //B.set(i,j);
        //draw.setPoint(B);
        draw.image[(j * width) + i]=(int) c;
      }
      //else
        //std::cout << "Point : " << i << "," << j << ">>" << MonSegment.getPointValue(i,j) << std::endl;
        
    }
  }
  B.set(150,250);
  C.set(250,250);
  Segment MonSegment2(width,height, B,C);

  for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++) {
      //std::cout << "Point : " << i << "," << j << " --> " << MonSegment.getPointValue(i,j) << std::endl;
      if (c=MonSegment2.getPointValue(i,j) != 0)
      {
        std::cout << "Point : " << i << "," << j << "--> " << (int) c << std::endl;
          //B.set(i,j);
        //draw.setPoint(B);
        draw.image[(j * width) + i]=(int) c;
      }
      //else
        //std::cout << "Point : " << i << "," << j << ">>" << MonSegment.getPointValue(i,j) << std::endl;
        
    }
  }


  draw.save(std::string("test_image2.bmp"));


  return 0;
}