#include <iostream>
#include <string>

#include "menu.h"
#include "Drawing.h"
#include "Figure.h"
#include "Rectangle.h"
#include "Point.h"
#include "Segment.h"
#include "Croix.h"

const int width = 300;
const int height = 400;

int main(int argc, char **argv) 
{
    char c;
    int exit_Prog=0;
    int a=0,b=0;c=0;
    int L=0,M=0;
    Drawing draw(width, height);
    Menu MenuPrincipal;
    std::vector<Figure*> VectorFigures;
    std::vector<Point*> VectorPointsOrigine;

    std::cout<<"\n**************************************************\n"<<std::endl;
    std::cout<<"\n\tBienvenu au Mini Projet: Dessins Simples\n"<<std::endl;
    std::cout<<"\n**************************************************\n"<<std::endl;

        while(MenuPrincipal.m_iOptionMenu!=2)
        {
            std::cout<<"Veuillez choisir une option:\n\n"<<std::endl;            
            std::cout<<"\t Dessiner une nouvelle figure     => 1\n"<<std::endl;
            std::cout<<"\t Quitter le programme             => 2\n"<<std::endl;
            std::cin>>MenuPrincipal.m_iOptionMenu;
            switch(MenuPrincipal.m_iOptionMenu)
            {
                
                case 1://Menu pour ajouter des figures
                {
                    std::cout<<"Quelle figure voulez-vous dessiner?:\n\n"<<std::endl;
                    std::cout<<"\t Un segment       => 0\n"<<std::endl;
                    std::cout<<"\t Un rectangle     => 1\n"<<std::endl;
                    std::cin>>MenuPrincipal.m_iOptionDessin;
                    switch(MenuPrincipal.m_iOptionDessin)
                    {
                        case 0://Dessiner un segment
                        {
                            std::cout<<"\t Saisissez la coordonnee en X de votre segment:\n"<<std::endl;
                            std::cin>>a;

                            std::cout<<"\t Saisissez la coordonnee en Y de votre segment:\n"<<std::endl;
                            std::cin>>b;

                            Point *pointOrigineSegment = new Point(a,b);
                            VectorPointsOrigine.push_back(pointOrigineSegment);

                            std::cout<<"\t Saisissez la taille de votre segment (en pixels):\n"<<std::endl;
                            std::cin>>c;

                            Segment *segment = new Segment(c);
                            Figure *figure_segment= new Figure(segment);
                            segment->tracerSegment();
                            VectorFigures.push_back(figure_segment);

                            a=0;
                            b=0;
                            c=0;
                            
                        }break;                            

                        case 1://Dessiner un rectangle
                        {
                            std::cout<<"\t Saisissez la coordonnee en X de votre Rectangle:\n"<<std::endl;
                            std::cin>>a;

                            std::cout<<"\t Saisissez la coordonnee en Y de votre Rectangle:\n"<<std::endl;
                            std::cin>>b;

                            Point *pointOrigineRectangle = new Point(a,b);
                            VectorPointsOrigine.push_back(pointOrigineRectangle);

                            std::cout<<"\t Saisissez la valeur L de votre rectangle(en pixels):\n"<<std::endl;
                            std::cin>>L;

                            std::cout<<"\t Saisissez la valeur M de votre rectangle(en pixels):\n"<<std::endl;
                            std::cin>>M;
                            Rectangle *rectangle = new Rectangle(L, M);
                            Figure *figure_rectangle= new Figure(rectangle);
                            rectangle->tracerRectangle();
                            VectorFigures.push_back(figure_rectangle);

                            a=0;
                            b=0;
                            L=0;
                            M=0;
                            
                        }break;
                            
                    }break;
                                        
                }      

                case 2://Sortir du programme et sauvegarder
                {
                    std::cout<<"A Bientot!!\n\n"<<std::endl;
                    Drawing draw(VectorFigures,VectorPointsOrigine,width,height);
                    draw.save(std::string("MonDrawing.bmp"));
                    exit_Prog=1;
                    
                }break;

                case 3://Autre chose...
                {}
                    break;                                
                
            }
        }        
    return 0;
}