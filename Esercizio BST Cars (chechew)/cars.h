#ifndef ESERCIZIO_BST_CARS__CHECHEW__CARS_H
#define ESERCIZIO_BST_CARS__CHECHEW__CARS_H

#include <iostream>
using namespace std;

class Cars {
    private:
        int static counter;
        string modello;
        int targa, nPosti, annoImm;
        float prezzo;
    public:
        Cars();
        Cars(string modello, int nPosti, int annoImm, float prezzo);
        Cars(const Cars& c);
        int getTarga();
        string getModello();
        int getNPosti();
        int getAnnoImm();
        float getPrezzo();
        void setModello(string Modello);
        void setNPosti(int nPosti);
        void setAnnoImm(int annoImm);
        void setPrezzo(float prezzo);
        void setTarga(int targa);
};

#endif //ESERCIZIO_BST_CARS__CHECHEW__CARS_H
