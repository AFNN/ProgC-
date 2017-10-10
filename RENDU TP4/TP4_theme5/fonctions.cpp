#include <iostream>
#include "fonctions.h"


A::A(int objet) {
    _objet = objet;
}
B::B() {
    A *a = new A;
    A *a2 = new A();
    A a3();
    A a4;
}

B::~B() {
    delete a;
    delete a2;
}


//initialisation du compteur
int Sess::compteur = 0;

Sess::Sess(){ //permet d'augmenter le compteur d'instance a chaque creation d'un objet
    ++compteur;
    std::cout <<"Nombre d'objet de classe Sess : "<< Sess::nombreInstance()<< std::endl;
}
Sess::~Sess(){ //permet de diminuer le compteur d'instance a chaque destruction d'objet
    --compteur;
    std::cout <<"Nombre d'objet de classe Sess : "<< Sess::nombreInstance()<< std::endl;
}
int Sess::nombreInstance()
{
    return compteur;
}

//Partie 3


U::U() {
    std::cout << "Creation de l'objet U " << std::endl;
}

U::~U() {
    std::cout << "Destruction de l'Objet U " << std::endl;

}

T::T() {
    std::cout << "Creation de l'objet T " << std::endl;
    objetU = new U;
}

T::~T() {
    std::cout << "Destruction de l'objet T " << std::endl;
    delete objetU;
}
