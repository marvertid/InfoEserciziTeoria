#ifndef LIBRO_H
#define LIBRO_H
#include <iostream>

using namespace std;

class Libro {
    private:
        string ISBN;
    public:
        Libro();
        Libro(string code);
        virtual ~Libro();
        void setISBN(string codice);
        string getISBN();
        virtual void stampa() = 0;
        virtual void leggi() = 0;
};

#endif