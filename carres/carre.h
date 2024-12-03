// TP 6 carr�s anim�s 
// Fonction ent�te du projet
// date : 03/12/2024
// utilisateur : XIONG Tom

#pragma once

//classe repr�sentant un carr�
class CCarre
{
private:
    //coordonn�e en x 
    int sx;
    //coordon�e en y 
    int sy;
    //cot� du carr�
    unsigned int cote;

public:
    int GetSx() const;
    int GetSy() const;
   unsigned int Getcote() const;
   
   //param�tre sx1 cooordonn�e x, sy1 coordonn�e y et cote1 coordonn�e cote
    void Setsx(int sx1);
    void Setsy(int sy1);
    void Setcote(unsigned int cote1);
    //affiche les caract�ristiques du carr�
    void Afficher();
};