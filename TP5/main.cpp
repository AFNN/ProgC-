#include <iostream>
#include "fonctions.h"
using namespace std;


int main()
{
    Y e;
    e.affichage();

    Y f = e; // Le constructeur de copie est utilisé
    e.affichage();
    f.affichage();

    f.setValue(); // Modification du tableau de b: tableau[Y] passe de i+1

    f.affichage(); //
    e.affichage();

    //partie 2
    D a;
    D b = a;

    D *suppr;

    cout << "pointeur sur objet (adresse): " << suppr << endl;

    delete suppr; // le pointeur sur l'objet est supprimé en premier et suppression de b et de a qui sont les objets

    // On peut voir 3 suppression

//partie 3

T t(2, 2);

//partie 4

    Y *c = new Y;
    delete c;

    void *d = new Y; //creation d'un objet d de type Y
    delete d; //suppression de l'objet D

    return 0;
}
