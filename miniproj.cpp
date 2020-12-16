#include <iostream>
#include <string>

#include "Drawing.h"
#include "Figure.h"
#include "Rectangle.h"
#include "Point.h"
#include "Segment.h"
#include "Croix.h"

const int width = 300;
const int height = 400;

int main(int argc, char **argv) {
  char c;
  Drawing draw(width, height);
  draw.createTestImage();
  //draw.clearImage();
  draw.save(std::string("test_image.bmp"));

  /*Point A;
  A.set(0,0);
  Figure MaFigure(width,height, A);
  //MaFigure.clearImage();
  for (int i=0; i<=200; i++)
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
    std::vector<Figure*> VectorFigures;
    std::vector<Point*> VectorPointsOrigine;
  //Instanciation point origine du rectangle
  Point *pointOrigineRectangle = new Point(40,50);

    VectorPointsOrigine.push_back(pointOrigineRectangle);

  Rectangle *rectangle = new Rectangle(50, 70);
  Figure *figure= new Figure(rectangle);
  rectangle->tracerRectangle();

    VectorFigures.push_back(figure);

    Point *pointOrigineSegment = new Point(25,250);

    VectorPointsOrigine.push_back(pointOrigineSegment);

  Segment *segment = new Segment(200);
  Figure *figure_segment= new Figure(segment);
    segment->tracerSegment();

    VectorFigures.push_back(figure_segment);

  Croix *croix = new Croix(20,30);
  Figure *figure_croix = new Figure(croix);
    croix->tracerCroix();
  //rectangle->save("rectangle.bmp", rectangle->getRectangleWidth(), rectangle->getRectangleHeight());

  Drawing drawfigure(VectorFigures, VectorPointsOrigine, width, height);

  drawfigure.DrawFigure();

  drawfigure.save(std::string("test_image2.bmp"));


  return 0;
}