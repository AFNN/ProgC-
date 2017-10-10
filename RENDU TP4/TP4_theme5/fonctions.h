#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED

class A {
    int _objet;

    public:
        A(int objet = 0);
};


class B {
    A *a, *a2; // On peut créer des instances de A en pointeurs ou non
    A a3, a4, a5;
    public:
        B();
        ~B();
};

class Sess {
    private:
         int static compteur;
    public:
        Sess();
        ~Sess();//destructeur
        int nombreInstance();

};
class U{
    public:
        U();
        ~U();
};

class T{
    U* objetU;
public:
    T();
    ~T(); //destructeur de T

};




#endif // FONCTIONS_H_INCLUDED
