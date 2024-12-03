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
    //retourne les valeurs: sx, sy et cote
    int GetSx() const;
    int GetSy() const;
   unsigned int Getcote() const;
   
   //paramètre sx1 cooordonnée x, sy1 coordonnée y et cote1 coordonnée cote
    void Setsx(int sx1);
    void Setsy(int sy1);
    void Setcote(unsigned int cote1);

    //affiche les caractéristiques du carré
    void Afficher();


    // "Déplace" le carré sans le dessiner. Les attributs x et y  
    // sont modifiés en ajoutant ou retranchant la valeur de saut en fonction de  
    // la direction : par ex direction nord saut=2 y=y-2 
    // Entrées : 
    // - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
    // - saut : nombre de pixels de déplacement du carré 
    // Sortie : Aucune 
    void Deplacer(char direction, int saut);

    // ajout aux coordonnées de la position du sommet du carré 
    void Deplacer(int dx, int dy);
};