#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>
#include "autore.h"
using namespace std;

class Libro {
    private:
        string titolo, cEdit;
        float prezzo;
        Autore *a;
        int nAutori; //dimensione effettiva di newAutore
    public:
        Libro();
        Libro(string t, string ed, float p, int n);
        Libro(string t, string ed, float p, Autore *aa, int n);
        Libro(const Libro& l);
        ~Libro();
        void setTitolo(string t);
        void setEditore(string ed);
        void setAutori(Autore *aa, int n);
        void setPrezzo(float p);
        string getTitolo();
        string getEditore();
        int getNrAutori();
        float getPrezzo();
        void stampaAutori();
        void leggiAutori();
        bool operator==(const Libro &newLibro);
    friend ostream& operator<<(ostream& out, const Libro& l);
    friend istream& operator>>(istream& in, Libro& l);

};


#endif