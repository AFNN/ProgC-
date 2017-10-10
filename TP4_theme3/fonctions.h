#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED

class Y {
    double *tableau;

    public:
        Y();
        Y(const Y& b); // Constructeur de copie
        ~Y();
        void affichage();
        void setValue();
};

class D
{
    int *tableau;

    public :
        D();
        D(const D& copie);
        ~D();
};
//partie 3
class O {
    public :
        O();
        ~O();
};

class T {
    O **tableau2D; // ** car ceci est un tableau à deux dimensions
    int ligne, colonne;

    public:
        T(int pligne = 0, int pcolonne = 0);
        ~T();
};


#endif // FONCTIONS_H_INCLUDED
