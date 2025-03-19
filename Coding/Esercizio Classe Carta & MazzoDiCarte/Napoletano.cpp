#include "napoletano.h"

Napoletano::Napoletano() {
    delete[] c;
    dim = 40;
    c = new Carta[dim];
}

Napoletano::~Napoletano() {
    delete[] c;
}

void Napoletano::inizializza() {
    string numeriCarte[7] = {"due", "tre", "quattro", "cinque", "sei", "sette"};
    for (int i = 0; i < dim; i++) {
        int temp = (i + 1) % 10;
        c[i].setNumero(temp);
        switch (temp) {
            case 1:
                c[i].setNome("Asso");
                c[i].setPunteggio(11);
                break;
            case 8:
                c[i].setNome("Fante");
                c[i].setPunteggio(2);
                break;
            case 9:
                c[i].setNome("Cavallo");
                c[i].setPunteggio(3);
                break;
            case 0:
                c[i].setNome("Re");
                c[i].setPunteggio(4);
                break;
            case 3:
                c[i].setNome("tre");
                c[i].setPunteggio(10);
                break;
            default:
                c[i].setNome(numeriCarte[temp - 1]);
                c[i].setPunteggio(0);
        }
        switch (i % 4) {
            case 0:
                c[i].setSeme("Bastoni");
            case 1:
                c[i].setSeme("Spade");
            case 2:
                c[i].setSeme("Denari");
            case 3:
                c[i].setSeme("Coppe");
        }
    }
}

int Napoletano::getDim() {
    return dim;
}

Carta Napoletano::operator--() {
    srand(time(NULL));
    int nRand = rand() % 40;
    Carta cartaEstratta = c[nRand];
    Carta *temp = new Carta[dim];
    for (int i = nRand; i < dim - 1; i++) {
        c[nRand] = c[i + 1];
    }
    for (int i = 0; i < dim; i++) {
        temp[i] = c[i];
    }
    dim--;
    delete[] c;
    Carta *c = new Carta[dim];
    for (int i = 0 ; i < dim; i++) {
        c[i] = temp[i];
    }

    return cartaEstratta;
}