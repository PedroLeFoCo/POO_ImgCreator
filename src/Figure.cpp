#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Carre.h"
#include "Save.h"
#include "Croix.h"
#include "Segment.h"

//Constructeur de figure par defaut
Figure::Figure()
{

}

//Constructeur de figure -> Rectangle
Figure::Figure(Rectangle* rectangle)
{
  m_iFigureWidth = rectangle->getRectangleWidth();
  m_iFigureHeight = rectangle->getRectangleHeight();
  m_FigureImg=rectangle->m_FigureImg;
}
//Constructeur de figure -> Carre
Figure::Figure(Carre* carre)
{
  m_iFigureWidth = carre->getCarreCote();
  m_FigureImg= carre->m_FigureImg;
}
//Constructeur de figure -> Croix
Figure::Figure(Croix* croix)
{
  m_iFigureWidth = croix->getCroixWidth();
  m_iFigureHeight = croix->getCroixHeight();
  m_FigureImg = croix->m_FigureImg;
}
//Constructeur de figure -> Segment
Figure::Figure(Segment *segment)
{
  m_iFigureWidth = segment->getSegmentLongueur();
  m_iFigureHeight = segment->getSegmentHauteur();
  m_FigureImg = segment->m_FigureImg;
}
//Destructeur de figure
Figure::~Figure() {
  std::cout << "Deleting Figure " << std::endl;
}
//Effacage de la figure
void Figure::clearFigure() {
  for (std::vector<char>::iterator it = m_FigureImg.begin(); it != m_FigureImg.end();it++)
  {
    *it = 0;
  }
}
//Sauvegarde de la figure
void Figure::save(std::string filename, int figureWidth, int figureHeight)
{
  SaveImg(filename, m_FigureImg, figureWidth, figureHeight);
}
//Set du pixel a la couleur blanche -> Avec la coordonnee calculee
void Figure::setPointColorWhite(int numCharColorWhite)
{  
  m_FigureImg[numCharColorWhite] = 'a';
}
//Set du pixel a la couleur blanche -> Avec les cordonnees separees
void Figure::setPointColorWhite(int x, int y)
{
  m_FigureImg[y * getFigureWidth() + x] = 'a';
}
//Set du pixel a la couleur blanche -> Avec un point
void Figure::setPointColorWhite(Point P)
{
  m_FigureImg[P.getPointCoordY()  * getFigureWidth() + P.getPointCoordX()] = 'a';
}
//Recuperation de la valeur de couleur d'un pixel
char Figure::getPointColorWhite(int rectangleLargeur, int x , int y)
{
  return m_FigureImg[y* rectangleLargeur + x];
}