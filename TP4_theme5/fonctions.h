#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED
class A {
    int _inutile;

    public:
        A(int inutile = 0);
};

class B {
    A *a1, *a2; // On peut créer des instances de A en pointeurs ou non
    A a3, a4, a5;
    public:
        B();
        ~B();
};




#endif // FONCTIONS_H_INCLUDED
