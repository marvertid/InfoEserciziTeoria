#include "portachiavi.h"

Portachiavi::Portachiavi() {
    nChiavi = 0;
    arrChiavi = nullptr;
    //nChiavi = 1;
    //arrChiavi = new Chiave[nChiavi];
}

Portachiavi::Portachiavi(int nrChiavi) {
    nChiavi = nrChiavi;
    if (nChiavi > 0) {
        arrChiavi = new Chiave[nChiavi];
    } else {
        nChiavi = 0;
        arrChiavi = nullptr;
    }
}

Portachiavi::Portachiavi(int nrChiavi, Chiave *newArrChiavi) {
    nChiavi = nrChiavi;
    if (nChiavi > 0) {

        arrChiavi = new Chiave[nChiavi];

        for (int i = 0; i < nChiavi; i++) {
            arrChiavi[i] = newArrChiavi[i];
        }
    } else {
        nChiavi = 0; 
        arrChiavi = nullptr;
    }
}

Portachiavi::~Portachiavi() {
    delete[] arrChiavi;
}

int Portachiavi::getNChiavi() {
    return nChiavi;
}

void Portachiavi::setPortachiavi(int nrChiavi, Chiave *newArrChiavi) {
    nChiavi = nrChiavi;
    if (nChiavi > 0) {

        arrChiavi = new Chiave[nChiavi];

        for (int i = 0; i < nChiavi; i++) {
            arrChiavi[i] = newArrChiavi[i];
        }
    } else {
        nChiavi = 0;
        arrChiavi = nullptr;
    }
}

Portachiavi& Portachiavi::operator++() {
    Chiave *temp = new Chiave[nChiavi];
    for (int i = 0; i < nChiavi; i++) {
        temp[i] = arrChiavi[i];
    }
    nChiavi++;
    delete[] arrChiavi;
    arrChiavi = new Chiave[nChiavi];

    for(int i = 0; i < nChiavi - 1; i++) {
        arrChiavi[i] = temp[i];
    }

    delete[] temp;
    cout << "Inserire chiave: " << endl;
    cin >> arrChiavi[nChiavi - 1];

    return *this;
}

Portachiavi& Portachiavi::operator-(const Chiave &newChiave) {
    int i;
    for (i = 0; i < nChiavi && arrChiavi[i] != newChiave; i++);
    if (i < nChiavi) {
        for (int j = i ; j < nChiavi - 1; j++) {
            arrChiavi[j] = arrChiavi[j + 1];
        }
        nChiavi--;
    } else {
        cout << "Chiave non trovata!";
    }
    return *this;
}

Portachiavi& Portachiavi::operator=(const Portachiavi &newPortachiavi) {
    delete[] arrChiavi;
    nChiavi = newPortachiavi.nChiavi;
    arrChiavi = new Chiave[nChiavi];

    for (int i = 0 ; i < nChiavi; i++) {
        arrChiavi[i] = newPortachiavi.arrChiavi[i];
    }

    return *this;
}

ostream& operator<<(ostream& outs, Portachiavi &newPortachiavi) {
    outs << "Numero chiavi: " << newPortachiavi.nChiavi;
    for (int i = 0; i < newPortachiavi.nChiavi; i++) {
        outs << newPortachiavi.arrChiavi[i];
    }
    return outs;
}

istream& operator>>(istream& ins, Portachiavi &newPortachiavi) {
    do {
        cout << "Inserire il numero di chiavi: ";
        ins >> newPortachiavi.nChiavi;
    }while (newPortachiavi.nChiavi <= 0);
    delete[] newPortachiavi.arrChiavi;
    newPortachiavi.arrChiavi = new Chiave[newPortachiavi.nChiavi];
    for (int i = 0; i < newPortachiavi.nChiavi; i++) {
        cin >> newPortachiavi.arrChiavi[i];
    }

    return ins;
}