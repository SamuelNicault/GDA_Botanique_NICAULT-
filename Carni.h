#ifndef CARNI_H
#define CARNI_H

#include <string>
#include "Plante.h"

class Carni : public Plante {

  
  public:
  
    void vendi();
    void achete();
    void boit();
    void nourrit();
    void engraisse();
    void tailler();
    void dort();
    
    void afficher();
    
    Carni(std::string name);
    
};

#endif