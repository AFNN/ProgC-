#include "fonctions.h"
#include <iostream>
#include <cmath>

using namespace std;

Y::Y(Y const& b) {
    tableau = new double[3];
    for (int i = 0; i<3; i++) {
        tableau[i] = b.tableau[i];
    }
    cout << "Entree dans le constructeur par copie" << endl;
}

Y::Y() {
    cout << "Entree dans le constructeur" << endl;
    tableau = new double[3];
    for (int i = 0; i<3; i++) {
        tableau[i] = i;
    }
}

Y::~Y() {
    cout << "Entree dans le destructeur" << endl;
    delete [] tableau;
}

void Y::affichage() {
    for (int i = 0; i<3; i++) {
        cout << "tableau[" << i << "] = " << tableau[i] << endl;
    }
}

void Y::setValue() {
    cout << "Modification du tableau f" << endl;
    for (int i = 0; i<3; i++) {
        tableau[i] = i+1;
    }
}

//partie 2

D::D()
{
    cout << "Constructeur : " << this << endl;
    tableau = new int[4];
}

D::D(const D  &copie){
    cout << "Constructeur par copie  (adresse): " << this << endl;
    tableau = new int[4];
    for (int i = 0; i < 4; i++) {
        tableau[i] = copie.tableau[i];
    }
}

D::~D(){
    cout << "Destructeur (adresse) : " << this << endl;
    delete tableau;
}

//partie 3
O::~O()
{
    cout << "destructeur de O (adresse): " << this << endl;
}

O::O()
{
    cout << "constructeur de O(adresse) :" << this << endl;
}


T::T(int pligne, int pcolonne) {
    ligne = pligne;
    colonne = pcolonne;

    cout << "constructeur de T (adresse):" << this << endl;

    tableau2D = new O*[ligne]; // premier appel au constructeur de O

    for (int i = 0; i < ligne; i++) {
        tableau2D[i] = new O[colonne]; // appels suivants au constructeur de O
    }
}

T::~T() {
    cout << "destructeur de T (adresse):" << this << endl;

    for (int i = 0; i < ligne; i++) {
        delete [] tableau2D[i]; // destruction de O
    }
    delete [] tableau2D;
}

