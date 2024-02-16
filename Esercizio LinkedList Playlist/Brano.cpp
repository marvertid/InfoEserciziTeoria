#include "brano.h"

Brano::Brano() {
    titolo = "Undefined";
    durata = 0;
    punt = 0;
}

Brano::Brano(string t, int d, int p) {
    titolo = t;
    durata = d;
    punt = p;
}

string Brano::getTitolo() {
    return titolo;
}

int Brano::getD() {
    return durata;
}

int Brano::getP() {
    return punt;
}

void Brano::setTitolo(string t) {
    titolo = t;
}

void Brano::setD(int d) {
    durata = d;
}

void Brano::setP(int p) {
    punt = p;
}

void Brano::set(string t, int d, int p) {
    titolo = t;
    durata = d;
    punt = p;
}

ostream& operator<<(ostream& out, const Brano &brano) {
    out << endl << "Titolo: " + brano.titolo;
    out << endl << "Durata: " + brano.durata;
    out << endl << "Punt: " + brano.punt;

    return out;
}

istream& operator>>(istream& in, const Brano &brano) {
    cout << endl << "Inserire brano: ";
    cout << endl << "Titolo: ";
    in >> brano.titolo;
    cout << endl << "Durata: ";
    in >> brano.durata;
    cout << endl << "Punt: ";
    in >> brano.punt;
}