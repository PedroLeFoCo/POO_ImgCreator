#ifndef POINT_H
#define POINT_H

class Point
{
private:
    /* data */
public:
    Point(/* args */);//Constructeur
    Point(int coordX, int coordY);//Constructeur -> Utilisant des cordonnees
    ~Point();

    //Getters
    int getPointCoordX(){return m_iPointCoordX;}//On recupere une coordonnee en X
    int getPointCoordY(){return m_iPointCoordY;}//On recupere une coordonnee en Y

    //Setters
    void setPointCoordX(int coordX){m_iPointCoordX = coordX;}//On set une coordonnee en X
    void setPointCoordY(int coordY){m_iPointCoordY = coordY;}//On set une coordonnee en Y
    
protected:
    //Membres
    int m_iPointCoordX;
    int m_iPointCoordY;
};

#endif /* POINT_H */