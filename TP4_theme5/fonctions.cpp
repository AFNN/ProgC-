#include "fonctions.h"

A::A(int inutile) {
    _inutile = inutile;
}
B::B() {
    A *a1 = new A;
    A *a2 = new A();
    A a3();
    A a4;
}

B::~B() {
    delete a;
    delete a2;
}
