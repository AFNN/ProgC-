#include <iostream>
#include "fonctions.h"
using namespace std;

int main()
{
    Complexe a(1.0,2.0);
    Complexe b(1.0,2.0) ;
    Complexe res;
    cout << res.reel << "+i" << res.im <<;
    res=Complexe(a).addition(Complexe(b));
    cout << res.reel << "+i" << res.im <<;

}
