#ifndef POINT_H
#define POINT_H

class Point
{
private:
    /* data */
public:
    Point(/* args */);
    Point(int coordX, int coordY);
    ~Point();

    //Getters
    int getPointCoordX(){return m_iPointCoordX;}
    int getPointCoordY(){return m_iPointCoordY;}

    //Setters
    void setPointCoordX(int coordX){m_iPointCoordX = coordX;}
    void setPointCoordY(int coordY){m_iPointCoordY = coordY;}
    
protected:
    int m_iPointCoordX;
    int m_iPointCoordY;
};

#endif /* POINT_H */