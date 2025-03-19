#ifndef ROMANZO_H
#define ROMANZO_H
#include "libro.h"

using namespace std;

class Romanzo : public Libro {
    private:
        string autore;
        string titolo;
        float prezzo;
    public:
        Romanzo();
        Romanzo(string code, string author, string title, float price);
        ~Romanzo();
        void setAutore(string author);
        string getAutore();
        void setTitolo(string title);
        string getTitolo();
        void setPrezzo(float price);
        float getPrezzo();
        void setAll(string code, string author, string title, float price);
        void leggi();
        void stampa();
        bool operator!=(Romanzo libro);
    friend ostream& operator<<(ostream& out, Romanzo& libro);
};

#endif