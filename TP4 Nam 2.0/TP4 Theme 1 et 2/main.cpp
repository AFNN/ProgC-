#include <iostream>
#include <cmath>
#include "fonctions.h"
#include "X.h"

using namespace std;

int main()
{
    Complexe a;
    Complexe b;
    Complexe res1, res2, res3, res4;

    //cout << res.reel << "+i" << res.im <<; //ERREUR car "reel" et "im" sont private
    a.saisie();
    a.affichage();

    b.saisie();
    b.affichage();

    res1.addition(a, b);
    cout << "Complexe a + Complexe b = " <<endl;
    res1.affichage();

    res2.soustraction(a, b);
    cout << "Complexe a - Complexe b = " <<endl;
    res2.affichage();

    res3.multiplication(a, b);
    cout << "Complexe a * Complexe b = " <<endl;
    res3.affichage();

    res4.division(a, b);
    cout << "Complexe a / Complexe b = " <<endl;
    res4.affichage();

    cout << "module de a : " << endl;
    cout << a.module() << endl;

    cout << "\n Recopie et tableaux statiques \n" <<endl;

    X c;
    X d;
    cout << "\n Tableau a \n" <<endl;
    c.affichage_X();
    cout << "\n Tableau b \n" <<endl;
    d = c;
    d.affichage_X();

    c.tab[0] = 1;
    cout << "\n Tableau a apres modification\n" <<endl;
    c.affichage_X();
    cout << "\n Tableau b apres modification\n" <<endl;
    d.affichage_X(); // b est créé avec le constructeur par recopie

}
