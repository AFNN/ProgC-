#include <iostream>
#include <cmath>
#include "fonctions.h"


using namespace std;

int main()
{
    Vector v1, v2, v3, v4, v5, v6;
    Vector res1, res2, res3, res4;

    cout << "Test addition\n " <<endl;
    cin >> v1;
    cout << v1;
    cin >> v2;
    cout << v2;
    res1 = v1 + v2;
    cout << "Addition : v1 + v2 = " << res1;

    cout << "\nTest soustraction\n " <<endl;
    cin >> v3;
    cout << v3;
    cin >> v4;
    cout << v4;
    res2 = v3 - v4;
    cout << "Soustraction : v3 - v4 = "  << res2;

    cout << "\nTest multiplication\n " <<endl;
    cin >> v5;
    cout << v5;
    cin >> v6;
    cout << v6;
    res4 = v5 * v6;
    cout << "Multiplication : v5 * v6 = " << res4;

    return 0;
}
