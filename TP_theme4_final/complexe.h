#ifndef COMPLEXE_H_INCLUDED
#define COMPLEXE_H_INCLUDED
#include <iostream>


class Complexe {
    private :
        double _reel;
        double _im;
    public :

        //accesseur
        double getReel() const;
        double getIm() const;

        //setter
        void setReel(double r);
        void setIm(double i);

        //Constructeur par défault
        Complexe(double reel=0.0 , double im=0.0);

        //Constructeur par recopie
        Complexe(const Complexe& copie);

        //Destructeur
        ~Complexe();

        friend Complexe operator+(Complexe a, Complexe b);
        friend Complexe operator-(Complexe a, Complexe b);
        friend Complexe operator*(Complexe a, Complexe b);
        friend Complexe operator/(Complexe a, Complexe b);
        Complexe& operator= (const Complexe& a);
        friend std::ostream& operator<< (std::ostream& os, const Complexe& a);
        friend std::istream& operator>> (std::istream& is, Complexe& b);

};

#endif // COMPLEXE_H_INCLUDED
