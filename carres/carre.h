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
    //retourne les valeurs: sx, sy et cote
    int GetSx() const;
    int GetSy() const;
   unsigned int Getcote() const;
   
   //param�tre sx1 cooordonn�e x, sy1 coordonn�e y et cote1 coordonn�e cote
    void Setsx(int sx1);
    void Setsy(int sy1);
    void Setcote(unsigned int cote1);

    //affiche les caract�ristiques du carr�
    void Afficher();


    // "D�place" le carr� sans le dessiner. Les attributs x et y  
    // sont modifi�s en ajoutant ou retranchant la valeur de saut en fonction de  
    // la direction : par ex direction nord saut=2 y=y-2 
    // Entr�es : 
    // - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
    // - saut : nombre de pixels de d�placement du carr� 
    // Sortie : Aucune 
    void Deplacer(char direction, int saut);

    // ajout aux coordonn�es de la position du sommet du carr� 
    void Deplacer(int dx, int dy);
};