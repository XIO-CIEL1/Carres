// TP 6 carrés animés 
// Fonction entête du projet
// date : 03/12/2024
// utilisateur : XIONG Tom

#pragma once

//classe représentant un carré
class CCarre
{
private:
    //coordonnée en x 
    int sx;
    //coordonée en y 
    int sy;
    //coté du carré
    unsigned int cote;

public:
    int GetSx() const;
    int GetSy() const;
   unsigned int Getcote() const;
   
   //paramètre sx1 cooordonnée x, sy1 coordonnée y et cote1 coordonnée cote
    void Setsx(int sx1);
    void Setsy(int sy1);
    void Setcote(unsigned int cote1);
    //affiche les caractéristiques du carré
    void Afficher();
};