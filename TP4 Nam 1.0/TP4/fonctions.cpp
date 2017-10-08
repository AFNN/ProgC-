#include <iostream>
#include "fonctions.h"


//Constructeur
Complexe::Complexe(double reel , double im)
{
    this->reel=reel;
    this->im=im;
    cout << "Construction du complexe en cours ... \n";
}

//Destructeur
Complexe::~Complexe(){
    cout << "Destruction du complexe en cours ... \n";

}

Complexe addition(Complexe a, Complexe b){
    Complexe c(0.0,0.0);
    double c_reel = a.getReel() + b.getReel();
    c.setReel(c_reel);
    double c_im = a.getIm() + b.getIm();
    c.setIm(c_im);

    cout << c.getReel() << "+i" << c.getIm() << endl;
    return c;
}


Complexe Complexe::soustraction(Complexe &a){
    Complexe c(0.0,0.0);
    c.reel = a.reel - this->reel;
    c.im = a.im - this->im;

    cout << c.reel << "+i" << c.im << "i";
    return c;
}

Complexe Complexe::multiplication(Complexe &a){
    Complexe c(0.0,0.0);
    c.reel = a.reel * this->reel;
    c.reel= c.reel - (a.im *this->im);
    c.im = c.im + (a.reel* this->im);
    c.im = a.im * this->reel;

    cout << c.reel << "+i" << c.im << "i";
    return c;
}



