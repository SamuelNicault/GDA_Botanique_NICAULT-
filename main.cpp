/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "Fleur.h"
#include "Carni.h"
#include "Botaniste.h"

int main()
{
    
    std::cout <<"Vous pouvez arroser, nourrir, couper, engraisser vos plantes.\nVous pouvez dormir, acheter ou vendre des plantes." 
              << std::endl;
    
    
    Fleur * cyclamen = new Fleur("Cyclamen");
    cyclamen->afficher();
    
    Botaniste * myself = new Botaniste("Sam");
    
    myself->arroser(cyclamen);
    cyclamen->afficher();
    
    myself->arroser(cyclamen);
    cyclamen->afficher();
    
    myself->arroser(cyclamen);
    cyclamen->afficher();
    
    myself->couper(cyclamen);
    cyclamen->afficher();
    
    myself->couper(cyclamen);
    cyclamen->afficher();
    
    myself->dormir(cyclamen);
    cyclamen->afficher();
    
    if(cyclamen -> _vie = 0){return 0;};
    return 0;
}
