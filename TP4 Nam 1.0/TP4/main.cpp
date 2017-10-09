#include <iostream>
#include "fonctions.h"

using namespace std;

int main()
{
    Complexe a(1.0,2.0);
    Complexe b(1.0,2.0) ;
    Complexe res;

    //cout << res.reel << "+i" << res.im <<; //ERREUR car "reel" et "im" sont private
    cout << res.getReel() << "+i" << res.getIm() << endl;
//    res = addition(Complexe a, Complexe b) ;
    cout << res.getReel() << "+i" << res.getIm()<< endl;

}
