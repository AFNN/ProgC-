#include <iostream>
#include <cmath>
#include "fonctions.h"


using namespace std;

int main()
{
    Vector v1;
    cin >> v1;
    cout << v1;

    Vector v2;
    cin >> v2;
    cout << v2;

    Vector addition;
    addition = v1 + v2; // On teste l'auto affectation
    cout << "v1 + v2 = " << addition;

    cout << "v3 et v4 pour tester v3-v4  " <<endl;
    Vector v3;
    cin >> v3;
    cout << v3;

    Vector v4;
    cin >> v4;
    cout << v4;

    Vector soustraction;
    soustraction = v3 - v4;
    cout << "v3 - v4 = " << soustraction;

    cout << "v5 et v6 pour tester v5*v6  " <<endl;

    Vector v5;
    cin >> v5;
    cout << v5;

    Vector v6;
    cin >> v6;
    cout << v6;

    Vector multiplication = v5 * v6;
    cout << "v5 * v6 = " << multiplication;
    return 0;
}
