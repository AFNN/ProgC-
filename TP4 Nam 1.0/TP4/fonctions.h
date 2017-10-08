#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED

#include <string>
using namespace std;

class Complexe {
    private :
        double reel;
        double im;
    public :
        //accesseur
        double getReel(){
            return reel;
        }

        //setter
        void setReel(double r){
            reel = r;
        }

        double getIm(){
            return im;
        }

        void setIm(double i){
            im = i;
        }

        Complexe(double reel=0.0 , double im=0.0);

        Complexe addition(Complexe, Complexe);
        Complexe soustraction(Complexe &);
        Complexe multiplication(Complexe &);
        void print();
        Complexe(Complexe&);
        ~Complexe();

};



#endif // FONCTIONS_H_INCLUDED
