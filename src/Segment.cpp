#include "Segment.h"

/*//#ifndef STB_IMAGE_WRITE_IMPLEMENTATION
    #define STB_IMAGE_WRITE_IMPLEMENTATION
    #include <stb_image_write.h>
    #include <stdexcept>
#endif
*/
Segment::Segment()
{

}

Segment::Segment(int longueur)
{
    m_SegmentLongeur = longueur;
    m_SegmentHauteur = 1;
    m_FigureImg.resize(m_SegmentLongeur*m_SegmentHauteur);    
}

void Segment::tracerSegment()
{
    //Tracer un segment
    
    //On trace le trait vertical de la croix
    std::cout<<"In method: tracerSegment()"<<m_SegmentLongeur<<std::endl;

    for(int i = 0; i<m_SegmentLongeur; i++)
    {
        int numCharColorWhite = i;
        setPointColorWhite(numCharColorWhite);
    }
}