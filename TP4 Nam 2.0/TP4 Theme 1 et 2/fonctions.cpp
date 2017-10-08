#include <iostream>
#include "fonctions.h"
#include <math.h>
#include "X.h"

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
    // Le constructeur par recopie est utilisé ) chaque copie d'objet
    cout << "Construction de copie du complexe en cours ... \n" << endl;
}

//Destructeur
Complexe::~Complexe(){
    cout << "Destruction du complexe en cours ... \n" << endl;
}

//Getters
double Complexe::getReel() {
    return _reel;
}
double Complexe::getIm() {
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

double Complexe::module(){
    double mod;
    mod = sqrt(pow(getReel(), 2) + pow(getIm(), 2));
    return mod;
}

//Méthode d'affichage et de saisie
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

//Méthode de la classe X

//Constructeur
X::X(){
    int i;
    for (i=0; i<10; i++){
        tab[i] = 0;
    }
    cout << "Construction en cours ... \n" << endl;
}

X::X(X const& copie){
    int i;
    for (i=0; i<10; i++){
        tab[i] = copie.tab[i];
    }
    cout << "Construction par recopie en cours ... \n" << endl;
}

// Destructeur
X::~X(){
    cout << "Destruction en cours ... \n" << endl;
}

void X::affichage_X(){
    int i;
    for (i=0; i<10; i++){
        cout << "tab[" << i << "] : " << tab[i] << endl;
    }
}




