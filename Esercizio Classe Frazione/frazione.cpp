#include "frazione.h"
#include <iostream>

using namespace std;

Frazione::Frazione() {

}

Frazione::Frazione(int num, int den) {
    numeratore = num;
    denominatore = den;
    if (numeratore == 0) {
        numeratore = 1;
    }
    if (denominatore == 0) {
        denominatore = 1;
    }
}

Frazione::Frazione(const Frazione &f) {
    denominatore = f.denominatore;
    numeratore = f.numeratore;
}

Frazione::~Frazione() {

}

void Frazione::setNumeratore(int num) {
    numeratore = num;
    if (numeratore == 0) {
        numeratore = 1;
    }
}

void Frazione::setDenominatore(int den) {
    denominatore = den;
    if (denominatore == 0) {
        denominatore = 1;
    }
}

int Frazione::getNumeratore() {
    return numeratore;
}

int Frazione::getDenominatore() {
    return denominatore;
}

Frazione Frazione::somma(const Frazione &f) {
    Frazione sum;
    sum.denominatore = denominatore * f.denominatore;
    sum.numeratore = (numeratore * f.denominatore) + (f.numeratore * denominatore);

    return sum;
}

Frazione Frazione::differenza(const Frazione &f) {
    Frazione diff;
    diff.denominatore = denominatore * f.denominatore;
    diff.numeratore = (numeratore * f.denominatore) - (f.numeratore * denominatore);

    return diff;
}

Frazione Frazione::prodotto(const Frazione &f) {
    Frazione prod;
    prod.numeratore = numeratore * f.numeratore;
    prod.denominatore = denominatore * f.denominatore;

    return prod;
}

Frazione Frazione::rapporto(const Frazione &f) {
    Frazione ratio; 
    ratio.numeratore = numeratore * f.denominatore;
    ratio.denominatore = denominatore * f.numeratore;

    return ratio;
}

void Frazione::readNumDen(int num, int den) {
    numeratore = num;
    denominatore = den;
    if (numeratore == 0) {
        numeratore = 1;
    }
    if (denominatore == 0) {
        denominatore = 1;
    }
}

void Frazione::stampaFrazione() {
    cout << numeratore << "/" << denominatore << endl;
}
