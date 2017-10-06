#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED

#include <string>
using namespace std;

class Complexe {
private :
        double reel;
        double im;
    public :
    Complexe(double reel=0.0 , double im=0.0);

	Complexe addition(Complexe &);
	Complexe soustraction(Complexe &);
	Complexe multiplication(Complexe &);
    void print();
    Complexe(Complexe&);

};

#endif // FONCTIONS_H_INCLUDED
