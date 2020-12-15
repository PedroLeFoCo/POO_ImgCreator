#include "Drawing.h"
#include "Save.h"


//            _    _  _                     _    _           _
//  ___  _ _ | |_ | |<_> ___  ._ _ _  ___ _| |_ | |_  ___  _| | ___
// | . \| | || . \| || |/ | ' | ' ' |/ ._> | |  | . |/ . \/ . |<_-<
// |  _/`___||___/|_||_|\_|_. |_|_|_|\___. |_|  |_|_|\___/\___|/__/
// |_|

Drawing::Drawing(const int width, const int height)
    : width(width), height(height) {
  image.resize(width * height);
}

Drawing::~Drawing() {}

/* Save image to file "filename" */
void Drawing::save(std::string filename) {

  SaveImg(filename, image, width, height);
}

//            _             _                      _    _           _
//  ___  _ _ <_> _ _  ___ _| |_ ___  ._ _ _  ___ _| |_ | |_  ___  _| | ___
// | . \| '_>| || | |<_> | | | / ._> | ' ' |/ ._> | |  | . |/ . \/ . |<_-<
// |  _/|_|  |_||__/ <___| |_| \___. |_|_|_|\___. |_|  |_|_|\___/\___|/__/
// |_|

/* Set every point of the image to 0 */
void Drawing::clearImage() {
  for (std::vector<char>::iterator it = image.begin(); it != image.end();
       it++) {
    *it = 0;
  }
}

/* Set image to test */
void Drawing::createTestImage() {
  for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++) {
      image[j * width + i] = (i + j) % 256;
    }
  }
}

/* Draw figure */
void Drawing::DrawFigure() 
{    
    std::cout<<"Start Draw"<<std::endl;
    std::cout<<ListeFigure.at(0)->m_Img.size()<<std::endl;
    std::cout<<ListeFigure.at(0)->getHeight()<<std::endl;
    for (int j = 0; j < ListeFigure.at(0)->getHeight(); j++) 
    {
        for (int i = 0; i < ListeFigure.at(0)->getWidth(); i++) 
        {
            //std::cout<<std::isprint(ListeFigure.at(0)->getImg()[j * width + i])<<std::endl;
            //std::string s(ListeFigure.at(0)->getImg().begin(),ListeFigure.at(0)->getImg().end());
            //std::cout<<s<<std::endl;
            if(ListeFigure.at(0)->m_Img.at(j * ListeFigure.at(0)->getWidth() + i)==255)
            {
                std::cout<<"Pixel Dessine"<<i<<" "<<j<<" "<<std::endl;
                //image[j * width + i] = ListeFigure.at(0)->getImg()[j * width + i];
                image.at(j * width + i) = 255;
            }            
            
        }
    }

}