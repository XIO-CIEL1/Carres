// TP 6 carrés animés 
// Fonction main du projet
// date : 03/12/2024
// utilisateur : XIONG Tom


#include "carre.h"
#include <iostream>

using namespace std;

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

