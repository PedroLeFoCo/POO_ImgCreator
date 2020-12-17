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
                    std::cout<<"\t Un segment horizontal       => 0\n"<<std::endl;
                    std::cout<<"\t Un rectangle     => 1\n"<<std::endl;
                    std::cout<<"\t Un segment via 2 points      =>2\n"<<std::endl;
                    std::cout<<"\t Une croix          =>3\n"<<std::endl;
                    std::cin>>MenuPrincipal.m_iOptionDessin;
                    switch(MenuPrincipal.m_iOptionDessin)
                    {
                        case 0://Dessiner un segment
                        {
                            std::cout<<"\t Rappel de la taille de l'image: "<<width<<" "<<"X"<<" "<<height<<std::endl;
                            std::cout<<"\t Saisissez la coordonnee en X de votre segment:\n"<<std::endl;
                            std::cin>>a;

                            std::cout<<"\t Saisissez la coordonnee en Y de votre segment:\n"<<std::endl;
                            std::cin>>b;

                            Point *pointOrigineSegment = new Point(a,b);
                            VectorPointsOrigine.push_back(pointOrigineSegment);

                            std::cout<<"\t Saisissez la taille de votre segment (en pixels):\n"<<std::endl;
                            std::cin>>c;

                            Segment *segment = new Segment(c);
                            segment->tracerSegment();
                            Figure *figure_segment= new Figure(segment);
                            VectorFigures.push_back(figure_segment);

                            a=0;
                            b=0;
                            c=0;
                            
                        }break;                            

                        case 1://Dessiner un rectangle
                        {
                            std::cout<<"\t Rappel de la taille de l'image: "<<width<<" "<<"X"<<" "<<height<<std::endl;
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
                            rectangle->tracerRectangle();
                            Figure *figure_rectangle= new Figure(rectangle);
                            VectorFigures.push_back(figure_rectangle);

                            a=0;
                            b=0;
                            L=0;
                            M=0;
                            
                        }break;
                        case 2://Dessiner un segment AB
                        {
                            std::cout<<"\t Rappel de la taille de l'image: "<<width<<" "<<"X"<<" "<<height<<std::endl;
                            std::cout<<"\t Saisissez la coordonnee en X du point de départ de votre segment:\n"<<std::endl;
                            std::cin>>a;
                            std::cout<<"\t Saisissez la coordonnee en Y du point de départ de votre segment:\n"<<std::endl;
                            std::cin>>b;
                            std::cout<<"\t Saisissez la coordonnee en X du point d'arrivée de votre segment:\n"<<std::endl;
                            std::cin>>L;
                            std::cout<<"\t Saisissez la coordonnee en Y du point d'arrivée de votre segment:\n"<<std::endl;
                            std::cin>>M;

                            Point *PointA = new Point(a,b);
                            Point *PointB = new Point(L,M);

                            VectorPointsOrigine.push_back(new Point(0,0));
                            Segment *segment = new Segment(PointA, PointB);
                            segment->tracerSegmentAB();
                            Figure *figure_segment= new Figure(segment);
                            VectorFigures.push_back(figure_segment);
                            a=0;
                            b=0;
                            L=0;
                            M=0;
                        }break;

                        case 3://Dessiner une croix
                        {
                            std::cout<<"\t Rappel de la taille de l'image: "<<width<<" "<<"X"<<" "<<height<<std::endl;
                            std::cout<<"\t Saisissez la coordonnee en X de votre Croix:\n"<<std::endl;
                            std::cin>>a;

                            std::cout<<"\t Saisissez la coordonnee en Y de votre Croix:\n"<<std::endl;
                            std::cin>>b;

                            std::cout<<"\t Saisissez la longueur de votre trait horizontal:\n"<<std::endl;
                            std::cin>>L;
                            std::cout<<"\t Saisissez la longueur de votre trait vertical:\n"<<std::endl;
                            std::cin>>M;

                            Point *pointOrigineCroix = new Point(a,b);

                            VectorPointsOrigine.push_back(pointOrigineCroix);
                            Croix *croix = new Croix(L,M);
                            croix->tracerCroix();
                            Figure *figure_croix= new Figure(croix);
                            VectorFigures.push_back(figure_croix);
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