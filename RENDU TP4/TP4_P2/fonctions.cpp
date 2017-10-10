#include <iostream>
#include <ostream>
#include "fonctions.h"
#include <math.h>

using namespace std;



Vector::Vector(int a, int b, int c) {
    tableau = new int[3];
    tableau[0] = a;
    tableau[1] = b;
    tableau[2] = c;
}

Vector::~Vector() {
    delete [] tableau;
}

void Vector::instTableau(int v[]) {
    for (int i = 0; i<3; i++) {
        v[i] = tableau[i];
    }
}

void Vector::defTableau(int newTableau[]) {
    for (int i = 0; i<3; i++) {
        tableau[i] = newTableau[i];
    }
}

Vector operator+(Vector v1, Vector v2) {
    Vector resultat;

    // Cr�ation des pointeurs de r�sultat
    int *newTableau = new int[3];
    int *v1tab = new int[3];
    int *v2tab = new int[3];

    // On r�cup�re les vecteurs v1 et v2 pour les stocker localement
    v1.instTableau(v1tab);
    v2.instTableau(v2tab);

    // On remplit le nouveau tableau local
    for (int i = 0; i<3; i++) {
        newTableau[i] = v1tab[i] + v2tab[i];
    }

    // On insere le tableau local dans l'objet r�sultat
    resultat.defTableau(newTableau);

    // Suppression des �l�ments cr��s dynamiquement inutile hors de la fonction
    delete [] newTableau;
    delete [] v1tab;
    delete [] v2tab;

    return resultat;
}

Vector operator-(Vector v1, Vector v2) {
    Vector resultat;

    // Cr�ation des pointeurs de r�sultat
    int *newTableau = new int[3];
    int *v1tab = new int[3];
    int *v2tab = new int[3];

    // On r�cup�re les vecteurs v1 et v2 pour les stocker localement dans un vector
    v1.instTableau(v1tab);
    v2.instTableau(v2tab);

    // On remplit le nouveau tableau local
    for (int i = 0; i<3; i++) {
        newTableau[i] = v1tab[i] - v2tab[i];
    }

    // On insere le tableau local dans l'instance r�sultat
    resultat.defTableau(newTableau);

    // Suppression des �l�ments cr��s dynamiquement inutile hors de la fonction
    delete [] newTableau;
    delete [] v1tab;
    delete [] v2tab;

    return resultat;
}

Vector operator*(Vector v1, Vector v2) {
    Vector resultat;

    // Cr�ation des pointeurs de r�sultat
    int *newTableau = new int[3];
    int *v1tab = new int[3];
    int *v2tab = new int[3];

    // On r�cup�re les vecteurs v1 et v2 pour les stocker localement
    v1.instTableau(v1tab);
    v2.instTableau(v2tab);

    // On remplit le nouveau tableau local
    for (int i = 0; i<3; i++) {
        newTableau[i] = v1tab[i] * v2tab[i];
    }

    // On injecte le tableau local dans l'instance r�sultat
    resultat.defTableau(newTableau);

    // Suppression des �l�ments cr��s dynamiquement
    delete [] newTableau;
    delete [] v1tab;
    delete [] v2tab;

    return resultat;
}

Vector& Vector::operator= (const Vector& v) {
    if (&v != this) {
        tableau[0] = v.tableau[0];
        tableau[1] = v.tableau[1];
        tableau[2] = v.tableau[2];
    }
    return *this;
}

ostream& operator<<(ostream& os, const Vector& v1) {
    os << v1.tableau[0] << " " << v1.tableau[1] << " " << v1.tableau[2] << endl;

    return os;
}

istream& operator>>(istream& is, Vector& v1) {
    cout << "Rentrez les 3 composantes du vecteur" << endl;
    is >> v1.tableau[0] >> v1.tableau[1] >> v1.tableau[2];

    return is;
}
