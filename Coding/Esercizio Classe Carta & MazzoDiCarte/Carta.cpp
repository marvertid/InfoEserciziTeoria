#include "carta.h"

Carta::Carta() {
    seme = "Undefined";
    nome = "Undefined";
    numero = 1;
    punteggio = 0;
}

Carta::Carta(string seme, string nome, int numero, int punteggio) {
    this->seme = seme;
    this->nome = nome;
    this->numero = numero;
    this->punteggio = punteggio;

    if (numero <= 0 || punteggio < 0) {
        numero = 1;
        punteggio = 0;
    }

}

Carta::~Carta() {

}
void Carta::setSeme(string seme) {
    this->seme = seme;
}
void Carta::setNome(string nome) {
    this->nome = nome;
}
void Carta::setNumero(int numero) {
    this->numero = numero;

    if (this->numero <= 0) {
        this->numero = 1;
        punteggio = 0;
    }
}
void Carta::setPunteggio(int punteggio) {
    this->punteggio = punteggio;

    if (this->punteggio < 0) {
        this->punteggio = 0;
        numero = 1;
    }
}

Carta Carta::confronta(Carta c2, Carta briscola) {
    Carta cartaVincente;
    if (c2.seme == this->seme) {
        cartaVincente = (c2.punteggio > this->punteggio) ? c2 : (*this);
    } else if (c2.seme == this->seme && c2.punteggio == this->punteggio) {
        cartaVincente = (c2.numero > this->numero) ? c2 : (*this);
    } else if(c2.seme != this->seme && c2.seme != briscola.seme && (*this).seme != briscola.seme) {
        cartaVincente = (*this);
    } else {
        cartaVincente = (c2.seme == briscola.seme) ? c2 : (*this);
    }
    return cartaVincente;
}
int Carta::operator+(Carta c2) {
    return numero + c2.numero;

}
istream& operator>>(istream& inp, Carta c) {
    do {
            cout << endl << "Inserire il seme della carta: ";
            inp >> c.seme;
    } while (c.seme == "");

    do {
        cout << endl << "Inserire il numero della carta: ";
        inp >> c.numero;
    } while (c.numero <= 0);

    return inp;
}
ostream& operator<<(ostream& out, Carta c) {
    out << endl << "Seme: " << c.seme;
    out << endl << "Nome: " << c.nome;
    out << endl << "Punteggio: " << c.punteggio;
    out << endl << "Numero: " << c.numero;

    return out;
}