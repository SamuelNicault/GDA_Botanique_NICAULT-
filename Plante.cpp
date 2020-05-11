#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <iostream>
#include "Plante.h"

/*    int _soif; int _fatigue; int _faim; std::string _nom; */
    void Plante::dort(){
        if(_soif > 100) {_sante -= 10; _soif = 50;};
        if(_soif > 60) {_age += 5;};
        if(_soif > 9 & _soif < 60) {_age += 5;};
        if(_faim == 1) {_age += 10;};
        if(_coupe < 0) {_sante -= 10; _coupe = 5;};
        if(_coupe > 6) {_age += 5;};
        if(_soif > 2 & _soif < 6) {_age += 3;};
        if(_engrais == 1) {_age += 10;};
        if(_sante < 0) {_vie =0;};

        _jour ++;
        _engrais = 0;
    }

    void Plante::boit(){
        _soif += 20;
        if(_soif < 0) {_sante -= 10; _soif = 0;};
        _coupe += 2;
    }
    
    void Plante::tailler(){
        _coupe -= 3;
        if(_coupe > 10) {_sante -= 10; _coupe = 0;};
        _soif -= 10;
    }
    
    void Plante::nourrit(){
        _faim ++;
        if(_faim < 0) _faim = 0;
        _faim --;
        _soif -= 10;
        _coupe += 2;
    }
    
    void Plante::engraisse(){
        if(_engrais<1){
        _engrais ++;
        if(_engrais < 0) _engrais = 0;
        _soif -= 10;
        _coupe += 2;
        };
    }
    
    void Plante::afficher(){
        std::cout << _nom << " est une Plante, a une faim de " 
                << _faim << "/100, une fatigue de "
                << _coupe << "/100, et un soif de " << _soif << "/100." << std::endl;
    }
    
    Plante::Plante(std::string name) : _nom(name), _soif(50), _coupe(5), _faim(0), _sante(100), _age(0)  {}

#endif