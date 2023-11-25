#include <iostream>

using namespace std;

Libreria::Libreria() {
    nLibr = 0;
    arrLibri = nullptr;
}

Libreria::Libreria(int nrLibri) {
    nLibri = nrLibri;
    if (nLibri > 0) {
        arrLibri = new Libreria[nLibri];
    }else {
        nLibri = 0;
        arrLibri = nullptr;
    }
}

Libreria::Libreria(int nrLibri, Libro *newArrLibri) {
    nLibri = nrLibri;
    if (nLibri > 0) {
        for (int i = 0; i < nLibri; i++) {
            arrLibri[i] = newArrLibri[i];
        }
    }else {
        nLibri = 0;
        arrLibri = nullptr;
    }
}

Libreria::Libreria(const Libreria &newLibreria) {
    nLibri = newLibreria.nLibri;

    arrLibri = new Libreria[nLibri];
    for (int i = 0; i < nLibri; i++) { //non devo fare nessun controllo perche "newLibreria" è gia stata controllata
        arrLibri[i] = newLibreria.arrLibri[i];
    }
}

Libreria::~Libreria() {
    delete[] arrLibri;
}

void Libreria::setLibreria(int nrLibri, Libreria &newLibreria) {
    delete[] arrLibri;
    nLibri = nrLibri;
    if (nLibri > 0) {
        for (int i = 0; i < nLibri; i++) {
            arrLibri[i] = newLibreria.arrLibri[i];
        }
    }else {
        nLibri = 0;
        arrLibri = nullptr;
    }
}

int Libreria::getNLibri() {
    return nLibri;
}

Libreria& Libreria::operator=(const Libreria &newLibreria) {
    nLibri = newLibreria.nLibri;
    for (int i = 0; i < nLibri; i++) {
        arrLibri[i] = newLibreria.arrLibri[i];
    }

    return *this;
}

int Libreria::operator||(Libro newLibro) {
    int i = 0;
    while (arrLibri[i] != newLibro && i < nLibri) {
        i++;
    }

}
//void Libreria::operator+(Libro newLibro);
//void Libreria::operator-(Libro newLibro);
ostream& operator<<(ostream& out, const Libro& l);
istream& operator>>(instream& in, Libro& l);