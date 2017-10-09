#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED

#include <string>
using namespace std;

class Complexe {
    private :
        double reel;
        double im;
    public :
        double getReel();
        void setReel(double);
        double getIm();
        void setIm(double);
        Complexe getComplex(Complexe);

        Complexe(double reel=0.0 , double im=0.0);

        Complexe addition(Complexe, Complexe);
        Complexe soustraction(Complexe &);
        Complexe multiplication(Complexe &);
        void print();
        Complexe(Complexe&);
        ~Complexe();

};



#endif // FONCTIONS_H_INCLUDED
