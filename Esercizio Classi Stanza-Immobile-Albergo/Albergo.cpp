#include "albergo.h"

float Albergo::costoU = 100;

Albergo::Albergo() {
    dim = 0;
    s = nullptr;
}
Albergo::~Albergo() {
    delete[] s;
}
void Albergo::inizializza() {
    do {
        cout << endl << "Inserire numero di stanze: ";
        cin >> dim;
    } while (dim < 0);
    delete[] s;
    Stanza* s = new Stanza[dim];
    for (int i = 0; i < dim; i++) {
        cin >> s[i];
    }
    cout << endl << "Inserire indirizzo: ";
    cin >> indirizzo;
    
}
Stanza Albergo::operator--() {
    int i, x; 
    cout << endl << "Inserire il numero della stanza: ";
    cin >> x;
    for (i = 0; i < dim && s[i].getNumero() != x; i++);
    if (i < dim && s[i].getStato() == true) {
        Stanza stanzaCancellata = s[i];
        for (int j = 0; j < dim; j++) {
            s[j] = s[j + 1];
        }
        dim--;
        Stanza* temp = new Stanza[dim];
        for (int j = 0 ; j < dim; j++) {
            temp[j] = s[j];
        }
        delete[] s;
        Stanza* s = new Stanza[dim];
        for (int j = 0; j < dim; j++) {
            s[j] = temp[j];
        }
        return stanzaCancellata;
    } else {
        Stanza tmp;
        return tmp;
    }
}
float Albergo::operator!() {
    float sum = 0;
    for (int i = 0; i < dim; i++) {
        sum += s[i].getMq();
    }
}
int Albergo::nSTanzeLibere() {
    int sumStanze = 0;
    for (int i = 0 ; i < dim; i++) {
        if (s[i].getStato() == true) sumStanze++; 
    }
    return sumStanze;
}
float Albergo::operator*(int piano) {
    int i;
    for (i = 0; i < dim && (s[i].getPiano() == piano && s[i].getStato() == true); i++);
    if (i < dim) {
        s[i].setStato(false);
        return s[i].getMq() * costoU;
    } 
    return -1;
}
float operator*(int piano, Albergo& newAlbergo) {
    int i;
    for (i = 0; i < newAlbergo.dim && (newAlbergo.s[i].getPiano() == piano && newAlbergo.s[i].getStato() == true); i++);
    if (i < newAlbergo.dim) {
        newAlbergo.s[i].setStato(false);
        return newAlbergo.costoU;
    } 
    return -1;
}