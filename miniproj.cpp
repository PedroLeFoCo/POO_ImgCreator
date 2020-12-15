#include <iostream>
#include <string>

#include "Drawing.h"
#include "Rectangle.h"
#include "Figure.h"
//#include "Segment.h"
#include "Croix.h"
using namespace std;

const int width = 300;
const int height = 400;

int main(int argc, char **argv) {
  char c;
  Drawing draw(width, height);
  //Drawing drawingCroix(width);
  draw.createTestImage();
  //draw.clearImage();
  //draw.save(std::string("test_image.bmp"));

  //Point A;
  //A.set(0,0);
  //Figure MaFigure();
  //MaFigure.clearImage();
/*  for (int i=0; i<=200; i++)
  {  
    A.set(i,i);//x,y
    MaFigure.setPoint(A);
  }
    MaFigure.save(std::string("MaFigure.bmp"));
  Point B,C;
  B.set(150,150);
  C.set(0,0);
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
  MonSegment.clearFigure();
  MonSegment.A.set(150,150);
  MonSegment.B.set(250,250);


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
*/

    draw.save(std::string("test_image2.bmp"));

    Croix *maCroix1=new Croix(50,50);
    maCroix1->tracerCroix();
    //Figure *maFigureCroix= new Figure(maCroix1);
    
    std::cout<<maCroix1->m_Img.size()<<std::endl;
    draw.ListeFigure.push_back(maCroix1);
    std::cout<<draw.ListeFigure.at(0)->m_Img.size()<<std::endl;
    draw.DrawFigure();
    draw.save(std::string("GoodTest.bmp"));
/*
    Figure *maFigureCroix= new Figure(maCroix1);
    //Draw Croix    
    Rectangle *monRectangle=new Rectangle(70,70);
    Figure *maFigureRectangle = new Figure(monRectangle);
    monRectangle->tracerRectangle();

    draw.ListeFigure.push_back(maFigureCroix);
    draw.ListeFigure.push_back(maFigureRectangle);

    draw.DrawFigure();
    draw.save(std::string("GoodTest.bmp"));*/
  return 0;
}