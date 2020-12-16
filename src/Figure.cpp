#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Carre.h"
#include "Save.h"
#include "Croix.h"
#include "Segment.h"

Figure::Figure()
{

}

Figure::Figure(Rectangle* rectangle)
{
  m_iFigureWidth = rectangle->getRectangleWidth();
  std::cout<<rectangle->getRectangleWidth()<<std::endl;
  m_iFigureHeight = rectangle->getRectangleHeight();
}

Figure::Figure(Carre* carre)
{
  m_iFigureWidth = carre->getCarreCote();
}

Figure::Figure(Croix* croix)
{
  m_iFigureWidth = croix->getCroixWidth();
  m_iFigureHeight = croix->getCroixHeight();
}

Figure::Figure(Segment *segment)
{
  m_iFigureWidth = segment->getSegmentLongueur();
  m_iFigureHeight = segment->getSegmentHauteur();
}

Figure::~Figure() {
  std::cout << "Deleting Figure " << std::endl;
}

void Figure::clearFigure() {
  for (std::vector<char>::iterator it = m_FigureImg.begin(); it != m_FigureImg.end();it++)
  {
    *it = 0;
  }
}

void Figure::save(std::string filename, int figureWidth, int figureHeight)
{
  SaveImg(filename, m_FigureImg, figureWidth, figureHeight);
}

void Figure::setPointColorWhite(int numCharColorWhite)
{
  //x et y sont les tours de boucle de la méthode tracer rectangle
  m_FigureImg[numCharColorWhite] = 255;
}

char Figure::getPointColorWhite(int rectangleLargeur, int x , int y)
{
  return m_FigureImg[x* rectangleLargeur + y];
}