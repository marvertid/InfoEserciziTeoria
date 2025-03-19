#ifndef CARTA_H
#define CARTA_H
#include <iostream>

using namespace std;


class Carta {
    private:
        string seme, nome;
        int numero, punteggio;
    public:
        Carta();
        Carta(string seme, string nome, int numero, int punteggio);
        ~Carta();
        void setSeme(string seme);
        void setNome(string nome);
        void setNumero(int numero);
        void setPunteggio(int punteggio);
        Carta confronta(Carta c2, Carta briscola);
        int operator+(Carta c2);
    friend istream& operator>>(istream& inp, Carta c);
    friend ostream& operator<<(ostream& out, Carta c);
};

#endif