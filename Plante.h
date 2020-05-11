#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante{
  protected:
    int _argent = 50;
    int _valeur = 50;
    int _sante = 100;
    int _soif = 50;
    int _coupe = 5;
    int _faim = 0;
    int _age = 0;
    int _engrais = 0;
    int _jour = 0;
    std::string _nom;
  
  public:
    int _vie = 1;
    void virtual boit();
    void virtual vendu();
    void virtual achete();
    void virtual nourrit();
    void virtual tailler();
    void virtual engraisse();
    void virtual dort();
    
    void afficher();
    
    Plante(std::string name);
    
};

#endif