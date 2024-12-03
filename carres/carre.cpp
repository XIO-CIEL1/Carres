// TP 6 carr�s anim�s 
// Fonction prototype du projet
// date : 03/12/2024
// utilisateur : XIONG Tom


#include "carre.h"
#include <iostream>

using namespace std;

// prototypes 

int CCarre::GetSx() const
{
    return 0;
}

int CCarre::GetSy() const
{
    return 0;
}

unsigned int CCarre::Getcote() const
{
    return 0;
}

void CCarre::Setsx(int sx1)
{
    this->sx = sx1;
}

void CCarre::Setsy(int sy1)
{
    this->sy = sy1;
}

void CCarre::Setcote(unsigned int cote1)
{
    this->cote = cote1;
}

void CCarre::Afficher()
{
    cout << " sx :" << this->sx << "sy :" << this->sy << " cote :" << this->cote;
}

void CCarre::Deplacer(char direction, int saut)
{
    // Selon la direction, 
    // on modifie les coordonn�es sx et sy
    switch (direction) 
    {
    case 'n':  // Nord
        // D�placer vers le haut (soustraire sy)
        sy -= saut;  
        break;
    case 's':  // Sud
        // D�placer vers le bas (augmenter sy)
        sy += saut;  
        break;
    case 'o':  // Ouest
        // D�placer vers la gauche (soustraire sx)
        sx -= saut;  
        break;
    case 'e':  // Est
        // D�placer vers la droite (augmenter sx)
        sx += saut;  
        break;
    default:
        std::cout << "Direction non valide." << std::endl;
        break;
    }
   
}

void CCarre::Deplacer(int dx, int dy)
{
    this->sx += dx;
    this->sy += dy;
}

