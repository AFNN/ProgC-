#ifndef COMPLEXE_H_INCLUDED
#define COMPLEXE_H_INCLUDED
#include <iostream>

class Vector {
    int *tableau;

    public:
        Vector(int a = 0, int b = 0, int c = 0);
        ~Vector();
        void instTableau(int v[]);
        void defTableau(int newTableau[]);
        friend std::istream& operator>>(std::istream& is, Vector& v1);
        friend std::ostream& operator<<(std::ostream& os, const Vector& v1);
        Vector& operator= (const Vector& v);
        friend Vector operator+(Vector v1, Vector v2);
        friend Vector operator-(Vector v1, Vector v2);
        friend Vector operator*(Vector v1, Vector v2);
        friend Vector operator/(Vector v1, Vector v2);
};

#endif // COMPLEXE_H_INCLUDED
