#include "carta.h"

Carta() {
    seme = "Undefined";
    nome = "Undefined";
    numero = 1;
    punteggio = 0;
}

Carta(string seme, string nome, int numero, int punteggio) {
    this->seme = seme;
    this->nome = nome;
    this->numero = numero;
    this->punteggio = punteggio;

    if (numero <= 0 || punteggio < 0) {
        numero = 1;
        punteggio = 0;
    }

}

~Carta() {

}
void setSeme(string seme) {
    this->seme = seme;
}
void setNome(string nome) {
    this->nome = nome;
}
void setNumero(int numero) {
    this->numero = numero;

    if (this->numero <= 0) {
        this->numero = 1;
        punteggio = 0;
    }
}
void setPunteggio(int punteggio) {
    this->punteggio = punteggio;

    if (this->punteggio < 0) {
        this->punteggio = 0;
        numero = 1;
    }
}
int confronta(Carta c2, Carta briscola) {

}
int operator+(Carta c2) {

}
friend istream& operator>>(istream& inp, Carta c) {

}
friend ostream& operator<<(ostream& out, Carta c) {

}