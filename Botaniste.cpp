#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include <string>
#include "Botaniste.h"
#include "Plante.h"

// std::string _botanisteName;
  
 
  
    void Botaniste::arroser(Plante * cible){
        cible->boit();
    }
    
    void Botaniste::couper(Plante * cible){
        cible->tailler();
    }
    
    void Botaniste::nourrir(Plante * cible){
        cible->nourrit();    
    }
    
    void Botaniste::engraisser(Plante * cible){
        cible->engraisse();    
    }
    
    void Botaniste::dormir(Plante * cible){
        cible->dort();
    }
    
    Botaniste::Botaniste(std::string nomBotaniste): _botanisteName(nomBotaniste) {}
    
#endif