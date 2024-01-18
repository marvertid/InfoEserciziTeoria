#ifndef STANZA_H
#define STANZA_H
#include <iostream>

using namespace std;


class Stanza {
    private:
        int numero;
        float mq;
        int piano;
        bool stato;
    public:
        Stanza();
        ~Stanza();
        void setNumero(int n);
        int getNumero();
        void setMq(float metri);
        int getMq();
        void setPiano(int p);
        int getPiano();
        void setStato(bool st);
        bool getStato();
        void setAll(int n, float metri, int p, bool st);
    friend istream& operator>>(istream& inp, Stanza& room);
    friend ostream& operator<<(ostream& out, Stanza& room);
};

#endif