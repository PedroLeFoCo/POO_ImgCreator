#include <iostream>

#include "Figure.h"

//#ifndef STB_IMAGE_WRITE_IMPLEMENTATION
  //#define STB_IMAGE_WRITE_IMPLEMENTATION
  //#include <stb_image_write.h>
  //#include <stdexcept>
//#endif

Point::Point(int Newx, int Newy) //constructeur
{
    x=Newx;
    y=Newy;
}
Point::~Point()//destructeur
{}

void Point::set(int Newx, int Newy)
{
    x=Newx;
    y=Newy;
}

void Figure::setPoint(Point P)
{
        img[P.y * width + P.x] = 255;
}



/*const std::vector<char> Figure::img()
{
    return img;
}*/

Figure::Figure(int width, int height, Point coord)
    : width(width), height(height) {
  img.resize(width * height);
}
Figure::~Figure() {
        std::cout << "Deleting Figure " << Name << std::endl;
    }

void Figure::clearFigure() {
  for (std::vector<char>::iterator it = img.begin(); it != img.end();it++)
   {
    *it = 0;
  }
}

void Figure::save(std::string filename) {

  if (filename.substr(filename.find_last_of(".") + 1) != "bmp") {
    throw std::runtime_error(
        "Figure ne supporte que l'enregistrement d'images au format bmp");
  }

  //createTestImage();
  //clearImage();
  //stbi_write_bmp(filename.c_str(), width, height, 1, img.data());
}
char Figure::getPointValue(int x, int y)
{
  return img[y*width + x];

}