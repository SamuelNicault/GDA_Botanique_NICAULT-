#ifndef FLEUR_H
#define FLEUR_H

#include <string>
#include "Plante.h"

class Fleur : public Plante {

  
  public:
  
    void boit();
    void engraisse();
    void tailler();
    void dort();
    
    void afficher();
    
    Fleur(std::string name);
    
};

#endif