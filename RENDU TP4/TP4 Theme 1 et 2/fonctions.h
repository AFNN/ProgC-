#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED

class Complexe {
    private :
        double _reel;
        double _im;
    public :

        //accesseur
        double getReel();
        double getIm();

        //setter
        void setReel(double r);
        void setIm(double i);

        //Constructeur par d�fault
        Complexe(double reel=0.0 , double im=0.0);

        //Constructeur par recopie
        Complexe(const Complexe& copie);

        //Destructeur
        ~Complexe();

        //Op�rations
        void addition(Complexe a, Complexe b);
        void soustraction(Complexe a, Complexe b);
        void multiplication(Complexe a, Complexe b);
        void division(Complexe a, Complexe b);
        double module();
        void saisie();
        void affichage();
};





#endif // FONCTIONS_H_INCLUDED
