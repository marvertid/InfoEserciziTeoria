#include "mazzodicarte.h"

MazzoDiCarte::MazzoDiCarte() {
    dim = 1;
    c = new Carta[dim];
}

MazzoDiCarte::~MazzoDiCarte() {
    delete[] c;
}