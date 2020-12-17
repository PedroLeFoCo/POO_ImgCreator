#include "Cercle.h"

 Cercle::Cercle(int centreX, int centreY, int rayon)
{

}


 void Cercle::tracerCercle(int centreX, int centreY, int rayon)
{   
    /* Algorithme de trace d'arc de cercle de Bresenham */

    int delta, y, x;        //x et y les coordonnes du point a dessiner
    x = 0;
    y = rayon;
    delta = 3 - (2 * rayon);


    /* d'apres les symetries d'un cercle, on peut  dessiner un point a 8 endroits en meme temps */
    while (y >= x)
    {
            int numCharColorWhite(centreX + x, centreY + y); //tracé du premier arc de cercle
            setPointColorWhite(numCharColorWhite);
            int numCharColorWhite(centreX + y, centreY + x); //tracé du premier symetrique
            setPointColorWhite(numCharColorWhite);
            int numCharColorWhite(centreX - x, centreY + y); //tracé du deuxieme symetrique
            setPointColorWhite(numCharColorWhite);
            int numCharColorWhite(centreX - y, centreY + x); //tracé du troisieme symetrique
            setPointColorWhite(numCharColorWhite);
            int numCharColorWhite(centreX + x, centreY - y); //tracé du quatrieme symetrique
            setPointColorWhite(numCharColorWhite);
            int numCharColorWhite(centreX + y, centreY - x); //tracé du cinquime symetrique
            setPointColorWhite(numCharColorWhite);
            int numCharColorWhite(centreX - x, centreY - y); //tracé du sixieme symetrique
            setPointColorWhite(numCharColorWhite);
            int numCharColorWhite(centreX - y, centreY - x); //tracé du spectieme symetrique
            setPointColorWhite(numCharColorWhite);

    if (delta < 0)
    {
       delta = delta + (4 * x) + 6;
    }
    else
    {
      delta = delta + 4 * (x - y) + 10;
      y--;
    }
    x++;
}