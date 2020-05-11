#ifndef FLEUR_CPP
#define FLEUR_CPP

#include <iostream>
#include "Fleur.h"
#include "Plante.h"

/*    int _soif; int _fatigue; int _faim; std::string _nom; */
  
    void Fleur::dort(){
        if(_soif > 100) {_sante -= 10; _soif = 50;};
        if(_soif > 60) {_age += 3;};
        if(_soif > 9 & _soif < 60) {_age += 2;};
        if(_faim == 1) {_age += 10;};
        if(_coupe < 0) {_sante -= 10; _coupe = 5;};
        if(_coupe > 6) {_age += 5;};
        if(_soif > 0 & _soif < 9) {_age += 2;};
        if(_engrais == 1) {_age += 7;};
        if(_sante < 0) {_vie =0;};

        _jour ++;
        _engrais = 0;
    }
    
    void Fleur::boit(){
        _soif += 20;
        if(_sante < 0) {_vie =0;};
        _coupe += 2;
    }
    
    void Fleur::tailler(){
        _coupe -= 3;
        if(_sante < 0) {_vie =0;};
        _soif -= 10;
    }
    
    void Fleur::engraisse(){
        if(_engrais<1){
        _engrais ++;
        if(_engrais < 0) _engrais = 0;
        _soif -= 10;
        _coupe += 2;
        };
    }
    
    void Fleur::afficher(){
        std::cout << _nom << " est une Fleur, son engrais est de " 
                  << _engrais << "/1, sa coupe est de "
                  << _coupe << "/10, et une soif de " 
                  << _soif << "/100. \nSa santé est de "
                  << _sante << "/100. Elle une la croissance de "
                  << _age << "."
                  << std::endl;
                  
        if (_age>=10 & _age<40){_valeur = 10; _valeur*2;  std::cout << _nom << " a éclot. Sa valeur est de "<< _valeur << std::endl;}
        if ( _age>=40){_valeur/10; std::cout << _nom << " a fanné. Sa valeur est de "<< _valeur << std::endl;}
    }
    
    Fleur::Fleur(std::string name) : Plante(name) {}

#endif