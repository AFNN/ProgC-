#include <iostream>
#include <ostream>
#include "fonctions.h"
#include <math.h>

using namespace std;

//Constructeur
Vector::Vector(int a, int b, int c) {
    tab = new int[3];
    tab[0] = a;
    tab[1] = b;
    tab[2] = c;
}

//Destructeur
Vector::~Vector() {
    delete [] tab;
}

void Vector::instTableau(int v[]) {
    for (int i = 0; i<3; i++) {
        v[i] = tab[i];
    }
}

void Vector::defTableau(int tab2[]) {
    for (int i = 0; i<3; i++) {
        tab[i] = tab2[i];
    }
}


//Surcharge des opérateurs

Vector operator+(Vector v1, Vector v2) {

    int *tab2 = new int[3];
    int *v1tab = new int[3];
    int *v2tab = new int[3];
    Vector resultat;

    v1.instTableau(v1tab);
    v2.instTableau(v2tab);
    for (int i = 0; i<3; i++) {
        tab2[i] = v1tab[i] + v2tab[i];
    }
    resultat.defTableau(tab2);

    delete [] tab2;
    delete [] v1tab;
    delete [] v2tab;

    return resultat;
}

Vector operator-(Vector v1, Vector v2) {
    int *tab2 = new int[3];
    int *v1tab = new int[3];
    int *v2tab = new int[3];
    Vector resultat;

    v1.instTableau(v1tab);
    v2.instTableau(v2tab);
    for (int i = 0; i<3; i++) {
        tab2[i] = v1tab[i] - v2tab[i];
    }
    resultat.defTableau(tab2);

    delete [] tab2;
    delete [] v1tab;
    delete [] v2tab;

    return resultat;
}

Vector operator*(Vector v1, Vector v2) {

    int *tab2 = new int[3];
    int *v1tab = new int[3];
    int *v2tab = new int[3];
    Vector resultat;

    v1.instTableau(v1tab);
    v2.instTableau(v2tab);
    for (int i = 0; i<3; i++) {
        tab2[i] = v1tab[i] * v2tab[i];
    }
    resultat.defTableau(tab2);

    delete [] tab2;
    delete [] v1tab;
    delete [] v2tab;

    return resultat;
}

Vector& Vector::operator= (const Vector& v) {
    if (&v != this) {
        tab[0] = v.tab[0];
        tab[1] = v.tab[1];
        tab[2] = v.tab[2];
    }
    return *this;
}

ostream& operator<<(ostream& os, const Vector& v1) {
    os << v1.tab[0] << " " << v1.tab[1] << " " << v1.tab[2] << endl;

    return os;
}

istream& operator>>(istream& is, Vector& v1) {
    cout << "Rentrez les 3 composantes du vecteur" << endl;
    is >> v1.tab[0] >> v1.tab[1] >> v1.tab[2];

    return is;
}
