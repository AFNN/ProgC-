#ifndef X_H_INCLUDED
#define X_H_INCLUDED

class X {

    public :
        int tab[10];
        X(); // Constructeur
        X(X const& copie); // Constructeur par recopie
        ~X(); // Destructeur
        void affichage_X();
};

#endif // X_H_INCLUDED
