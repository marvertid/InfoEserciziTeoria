#ifndef LIBRERIA_H
#define LIBRERIA_H

#include "libro.h"

using namespace std;

class Libreria {
    private:
        Libro *arrLibri;
        int nLibri;
    public:
        Libreria();
        Libreria(int nrLibri);
        Libreria(int nrLibri, Libro *newArrLibri);
        Libreria(const Libreria &newLibreria);
        ~Libreria();
        void setLibreria(int nrLibri, Libreria &newLibreria);
        int getNLibri();
        Libreria& operator=(const Libreria &newLibreria);
        int operator||(Libro newLibro);
        //Libreria operator+(Libro newLibro);
        //Libreria operator-(Libro newLibro);
    friend ostream& operator<<(ostream& out, const Libro& l);
    friend istream& operator>>(instream& in, Libro& l);
};

#endif