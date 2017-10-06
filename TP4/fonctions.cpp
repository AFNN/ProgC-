#include <iostream>
#include "fonctions.h"
Complexe::Complexe(double reel , double im)
{
    this->reel=reel;
    this->im=im;
}
Complexe Complexe::addition(Complexe &a){
    Complexe c(0.0,0.0);
    c.reel = a.reel + this->reel;
    c.im = a.im + this->im;

    cout << c.reel << "+i" << c.im << "i";
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


