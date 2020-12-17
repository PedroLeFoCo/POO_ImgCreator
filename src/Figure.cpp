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
  //std::cout<<rectangle->getRectangleWidth()<<std::endl;
  m_iFigureHeight = rectangle->getRectangleHeight();
  m_FigureImg=rectangle->m_FigureImg;
}

Figure::Figure(Carre* carre)
{
  m_iFigureWidth = carre->getCarreCote();
  m_FigureImg= carre->m_FigureImg;
}

Figure::Figure(Croix* croix)
{
  m_iFigureWidth = croix->getCroixWidth();
  m_iFigureHeight = croix->getCroixHeight();
  m_FigureImg = croix->m_FigureImg;
}

Figure::Figure(Segment *segment)
{
  m_iFigureWidth = segment->getSegmentLongueur();
  m_iFigureHeight = segment->getSegmentHauteur();
  m_FigureImg = segment->m_FigureImg;
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
  m_FigureImg[numCharColorWhite] = 'a';
}

char Figure::getPointColorWhite(int rectangleLargeur, int x , int y)
{
  return m_FigureImg[y* rectangleLargeur + x];
}