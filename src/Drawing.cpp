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
    DrawFigure();
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
  clearImage();
  //Tracer la figure sur le draw
  for(int n=0;n<m_VectorFigures.size();n++) //Je parcoure mes figures
  {
/*    for(int x=m_VectorPointsOrigine.at(n)->getPointCoordX(); x < m_VectorPointsOrigine.at(n)->getPointCoordX()+m_VectorFigures.at(n)->getFigureWidth();x++)
    {
        for(int y=m_VectorPointsOrigine.at(n)->getPointCoordY(); y < m_VectorPointsOrigine.at(n)->getPointCoordY()+m_VectorFigures.at(n)->getFigureHeight();y++)
        {
            //std::cout<<m_VectorFigures.at(n)->getPointColorWhite(m_VectorFigures.at(n)->getFigureWidth(),i,j)<<std::endl;
            if(m_VectorFigures.at(n)->getPointColorWhite(m_VectorFigures.at(n)->getFigureWidth(),x-m_VectorFigures.at(n)->getFigureWidth(),y-m_VectorFigures.at(n)->getFigureHeight())!=0)
            {
                int numChar = y * m_DrawingWidth + x;
                m_DrawingImage.at(numChar) = m_VectorFigures.at(n)->getPointColorWhite(m_VectorFigures.at(n)->getFigureWidth(),x-m_VectorFigures.at(n)->getFigureWidth(),y-m_VectorFigures.at(n)->getFigureHeight());
            }        
        }
        for(int l=m_VectorPointsOrigine.at(n)->getPointCoordX()+m_VectorFigures.at(n)->getFigureWidth();l<m_DrawingWidth;l++)
        {
            int numChar = i * (m_DrawingWidth)+ l;
            m_DrawingImage.at(numChar) = 0;
        }
 */
      for (int x=0; x<m_VectorFigures.at(n)->getFigureWidth();x++)
      {
        for (int y=0; y<m_VectorFigures.at(n)->getFigureHeight();y++)
        {
          if(m_VectorFigures.at(n)->getPointColorWhite(m_VectorFigures.at(n)->getFigureWidth(),x,y)!=0)
          {
            m_DrawingImage.at((y+m_VectorPointsOrigine.at(n)->getPointCoordY()) * m_DrawingWidth + x+m_VectorPointsOrigine.at(n)->getPointCoordX())=255;
          }
        }
      }
    }
}