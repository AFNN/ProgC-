#include <iostream>
#include <cmath>
#include "complexe.h"
#include "vector.h"

using namespace std;

int main()
{

    Complexe a;
    Complexe b;
    Complexe res1, res2, res3, res4;

    cin >> a;
    cout << a;
    cin >> b;
    cout << b;

    res1 = a + b;
    cout << "Resultat addition : \n" << endl;
    cout << res1;

    res2 = a - b;
    cout << "Resultat soustraction : \n" << endl;
    cout << res2;

    res3 = a * b;
    cout << "Resultat multiplication : \n" << endl;
    cout << res3;

    res4 = a / b;
    cout << "Resultat division : \n" << endl;
    cout << res4;

    return 0;
}
