#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include "Plante.h"

class Botaniste{
  private:
    std::string _botanisteName;
  
  public:
  
    void arroser(Plante * cible);
    void nourrir(Plante * cible);
    void couper(Plante * cible);
    void engraisser(Plante * cible);
    void dormir(Plante * cible);
    
    
    Botaniste(std::string nomBotaniste);
    
};

#endif