#include "base.h"

int Base::nrMax = 500;

Base::Base() {
    dim = 0;
    p = nullptr;
}

Base::Base(const Base& b) {
    dim = b.dim;
    if (dim > 0 || dim < nrMax) {
          delete[] p;
        Paziente* p = new Paziente[dim];
        for (int i = 0; i < dim; i++) {
            p[i] = b.p[i];
        }
    } else {
        dim = 0;
        p = nullptr;
    }
  
}

Base::~Base() {
    delete[] p;
}

void Base::leggi() {
    Medico::leggi();
    do {
        cout << endl << "Inserire numero di pazienti: ";
        cin >> dim;
    } while (dim <= 0 || dim > nrMax);
    delete[] p;
    Paziente* p = new Paziente[dim];
    for (int i = 0; i < dim; i++) {
        p[i].leggi();
    }
}

void Base::stampa() {
    Medico::stampa();
    cout << endl << "Numero di pazienti: " << dim;
    for (int i = 0; i < dim ; i++) {
        p[i].stampa();
    }
}

Base& Base::operator++() {
 //boh
}

Base& Base::operator-(const Paziente& p) {
    //boh
}