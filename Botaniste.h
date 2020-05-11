#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include "Plante.h"

class Botaniste{
  protected:
    std::string _botanisteName;
    int _argent;
  
  public:
  
    void arroser(Plante * cible);
    void vendre(Plante * cible);
    void acheter(Plante * cible);
    void nourrir(Plante * cible);
    void couper(Plante * cible);
    void engraisser(Plante * cible);
    void dormir(Plante * cible);
    
    
    Botaniste(std::string nomBotaniste);
    
};

#endif