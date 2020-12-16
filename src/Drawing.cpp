#include <iostream>
#include "Drawing.h"


//            _    _  _                     _    _           _
//  ___  _ _ | |_ | |<_> ___  ._ _ _  ___ _| |_ | |_  ___  _| | ___
// | . \| | || . \| || |/ | ' | ' ' |/ ._> | |  | . |/ . \/ . |<_-<
// |  _/`___||___/|_||_|\_|_. |_|_|_|\___. |_|  |_|_|\___/\___|/__/
// |_|

Drawing::Drawing(const int width, const int height)
    : m_DrawingWidth(width), m_DrawingHeight(height) {
  m_DrawingImage.resize(width * height);
}

Drawing::Drawing(std::vector<Figure*> VectorFigure,std::vector<Point*> VectorPointOrigine, const int width, const int height)
  : m_DrawingWidth(width), m_DrawingHeight(height)
{
  m_VectorFigures = VectorFigure;
  m_VectorPointsOrigine = VectorPointOrigine;
  m_DrawingImage.resize(width * height);

}
Drawing::~Drawing() {}

/* Save image to file  ="filename" */
void Drawing::save(std::string filename) {

  SaveImg(filename, m_DrawingImage, m_DrawingWidth, m_DrawingHeight);
}

//            _             _                      _    _           _
//  ___  _ _ <_> _ _  ___ _| |_ ___  ._ _ _  ___ _| |_ | |_  ___  _| | ___
// | . \| '_>| || | |<_> | | | / ._> | ' ' |/ ._> | |  | . |/ . \/ . |<_-<
// |  _/|_|  |_||__/ <___| |_| \___. |_|_|_|\___. |_|  |_|_|\___/\___|/__/
// |_|

/* Set every point of the image to 0 */
void Drawing::clearImage() {
  for (std::vector<char>::iterator it = m_DrawingImage.begin(); it != m_DrawingImage.end();
       it++) {
    *it = 0;
  }
}

/* Set image to test */
void Drawing::createTestImage() {
  for (int j = 0; j < m_DrawingHeight; j++) {
    for (int i = 0; i < m_DrawingWidth; i++) {
      m_DrawingImage[j * m_DrawingWidth + i] = (i + j) % 256;
    }
  }
}

void Drawing::DrawFigure()
{
    std::cout<<"In DRAW FIGURE"<<std::endl;
    std::cout<<m_DrawingPointOrigine->getPointCoordX()<<std::endl;
    std::cout<<m_VectorFigures.at(0)->getFigureWidth()<<std::endl;
    std::cout<<m_VectorFigures.at(0)->getFigureHeight()<<std::endl;
  //Tracer la figure sur le draw
  for(int n=0;n<m_VectorFigures.size();n++)
  {
    for(int i=m_VectorPointsOrigine.at(n)->getPointCoordY(); i < m_VectorPointsOrigine.at(n)->getPointCoordY()+m_VectorFigures.at(n)->getFigureHeight(); i++)
    {
        for(int j=m_VectorPointsOrigine.at(n)->getPointCoordX(); j < m_VectorPointsOrigine.at(n)->getPointCoordX()+m_VectorFigures.at(n)->getFigureWidth(); j++)
        {        
            int numChar = i * m_DrawingWidth + j;
            m_DrawingImage.at(numChar) = 255;
        }
        for(int l=m_VectorPointsOrigine.at(n)->getPointCoordX()+m_VectorFigures.at(n)->getFigureWidth();l<m_DrawingWidth;l++)
        {
            int numChar = i * (m_DrawingWidth)+ l;
            m_DrawingImage.at(numChar) = 0;
        }
    }
  }

}