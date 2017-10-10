#include <iostream>
#include <ostream>
#include "complexe.h"
#include <math.h>

using namespace std;

//Constructeur
Complexe::Complexe(double reel, double im)
{
    _reel=reel;
    _im=im;
    cout << "Construction du complexe en cours ... \n" << endl;
}

//Constructeur par recopie
Complexe::Complexe(Complexe const& recopie) : _reel(recopie._reel), _im(recopie._im){
    // Le constructeur par recopie est utilisé à chaque copie d'objet
    cout << "Construction de copie du complexe en cours ... \n" << endl;
}

//Destructeur
Complexe::~Complexe(){
    cout << "Destruction du complexe en cours ... \n" << endl;
}

//Getters
double Complexe::getReel()const{
    return _reel;
}
double Complexe::getIm()const{
    return _im;
}

//Setters

void Complexe::setReel(double reel) {
    _reel = reel;
}
void Complexe::setIm(double im) {
    _im = im;
}

//Surcharge des opérateurs

Complexe operator+(Complexe a, Complexe b) {
    Complexe res;
    res.setReel(a.getReel() + b.getReel());
    res.setIm(a.getIm() + b.getIm());
    return res;
}

Complexe operator-(Complexe a, Complexe b) {
    Complexe res;
    res.setReel(a.getReel() - b.getReel());
    res.setIm(a.getIm() - b.getIm());
    return res;
}
Complexe operator*(Complexe a, Complexe b) {
    Complexe res;
    res.setReel(a.getReel() * b.getReel());
    res.setIm(a.getIm() * b.getIm());
    return res;
}
Complexe operator/(Complexe a, Complexe b) {
    Complexe res;
    res.setReel(a.getReel() / b.getReel());
    res.setIm(a.getIm() / b.getIm());
    return res;
}

ostream& operator<<(ostream& os, const Complexe& a){
        os << a.getReel() << "+ " << a.getIm() << "i" << endl;
    return os;
}

istream& operator>>(istream& is, Complexe& b){
    cout << "\n Veuillez saisir la partie reelle du complexe : " << endl;
    is >> b._reel;
    cout << "\n Veuillez saisir la partie imaginaire du complexe : " << endl;
    is >> b._im;
    return is;
}

Complexe& Complexe::operator= (const Complexe& a) {
    if (&a != this) {
        _reel = a.getReel();
        _im = a.getIm();
    }
    return *this;
}


