#include <iostream>
#include "fonctions.h"
#include "fonctions.cpp"
using namespace std;


int main()
{
    Y e;
    e.affichage();

    Y f = e; // Le constructeur de copie est utilisé pour créer f a partir de e
    e.affichage();
    f.affichage();

    e.setValue(); // Modification du tableau de l'objet f: tableau[Y] passe de i+1
    cout << "PARTIE affichage tableau f apres modif du tableau e"<<endl;
    f.affichage(); //On voit bien une modification sur l'objet f
    cout << "PARTIE affichage tableau f apres modif du tableau e"<<endl;
    e.affichage(); // aucune modification car c'est f est un copie de e et ne dirige pas directement sur l'adrese de e


    cout << "PARTIE 2"<<endl;


    //partie 2
    D a,b;

    D *suppr;

    cout << "pointeur sur objet (adresse): " << suppr << endl;

    delete suppr; // le pointeur sur l'objet est supprimé en premier et suppression de b et de a qui sont les objets

    // On peut voir 3 suppression

//partie 3
cout << "PARTIE 3"<<endl;
T t(2, 2);

//partie 4
cout << "PARTIE 4"<<endl;
    Y *c = new Y;
    delete c;

    void *d = new Y; //creation d'un objet d de type Y
    delete d; //suppression de l'objet d

    return 0;
}
