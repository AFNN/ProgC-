#include <iostream>
#include <cmath>
#include "complexe.h"

using namespace std;

int main()
{

    Complexe a;
    Complexe b;
    Complexe res1, res2, res3, res4;

    //cout << res.reel << "+i" << res.im <<; //ERREUR car "reel" et "im" sont private


    cin >> a;
    cout << a;
    cin >> b;
    cout << b;


    /*
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
    */
    res1 = a + b ;
    cout << res1;

    return 0;
}
