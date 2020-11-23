#include <iostream>
#include <string>

#include "Drawing.h"
#include "Figure.h"

const int width = 300;
const int height = 400;

int main(int argc, char **argv) {

  Drawing draw(width, height);
  draw.createTestImage();
  carre(draw, 100, 128);
  draw.save(std::string("test_image.bmp"));

  return 0;
}