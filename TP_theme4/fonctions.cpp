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
    // Le constructeur par recopie est utilis� � chaque copie d'objet
    cout << "Construction de copie du complexe en cours ... \n" << endl;
}

//Destructeur
Complexe::~Complexe(){
    cout << "Destruction du complexe en cours ... \n" << endl;
}

//Getters
double Complexe::getReel(){
    return _reel;
}
double Complexe::getIm(){
    return _im;
}

//Setters

void Complexe::setReel(double reel) {
    _reel = reel;
}
void Complexe::setIm(double im) {
    _im = im;
}

// Methodes Operations
/*
void Complexe::addition(Complexe a, Complexe b){
    setReel(a.getReel() + b.getReel());
    setIm(a.getIm() + b.getIm());
}

void Complexe::soustraction(Complexe a, Complexe b){
    setReel(a.getReel() - b.getReel());
    setIm(a.getIm() - b.getIm());
}

void Complexe::multiplication(Complexe a, Complexe b){
    setReel(a.getReel() * b.getReel());
    setIm(a.getIm() * b.getIm());
}

void Complexe::division(Complexe a, Complexe b){
    setReel(a.getReel() / b.getReel());
    setIm(a.getIm() / b.getIm());
}
*/
double Complexe::module(){
    double mod;
    mod = sqrt(pow(getReel(), 2) + pow(getIm(), 2));
    return mod;
}

//M�thode d'affichage et de saisie

void Complexe::affichage(){
    cout << getReel() << "+ " << getIm() << "i" << endl;
}

void Complexe::saisie(){
    double reel;
    double im;
    cout << "\n Veuillez saisir la partie reelle du complexe : " << endl;
    cin >> reel;
    cout << "\n Veuillez saisir la partie imaginaire du complexe : " << endl;
    cin >> im;
    setReel(reel);
    setIm(im);
}



//Surcharge des op�rateurs

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

ostream& operator<<(ostream& os, Complexe& a){
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


Complexe& Complexe::operator= ( Complexe& c) {
    if (&c != this) {
        _reel = c.getReel();
        _im = c.getIm();
    }
    return *this;
}





