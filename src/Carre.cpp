#include "Carre.h"

Carre::Carre(int cote)  //Constructeur de Carre
{
    m_CarreCote = cote;

    m_FigureImg.resize(m_CarreCote * m_CarreCote);
}

void Carre::tracerCarre()//Methode pour tracer un carre
{  
    //On part de 0 on parcourt la largeur du rectangle
    for(int i=0; i<m_CarreCote; i++)
    {
        //On parcout la hauteur du rectangle
        for(int j=0; j<m_CarreCote; j++)
        {
            //passe le pixel correspondant au point en blanc
            int numCharColorWhite = i * m_CarreCote +j;
            setPointColorWhite(numCharColorWhite);
        } 
    }
}