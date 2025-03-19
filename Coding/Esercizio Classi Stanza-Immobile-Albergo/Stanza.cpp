#include "stanza.h"

Stanza::Stanza() {
    numero = 0;
    mq = 0;
    piano = 0;
    stato = false;
}

Stanza::~Stanza() {

}

void Stanza::setNumero(int n) {
    if (n > 0) {
        numero = n;
    }
}

int Stanza::getNumero() {
    return numero;
}

void Stanza::setMq(float metri) {
    if (metri > 0) {
        mq = metri;
    }
}
int Stanza::getMq() {
    return mq;
}
void Stanza::setPiano(int p) {
    if (p > 0) {
        piano = p;
    }
}
int Stanza::getPiano() {
    return piano;
}
void Stanza::setStato(bool st) {
    stato = st;
}
bool Stanza::getStato() {
    return stato;
}
void Stanza::setAll(int n, float metri, int p, bool st) {
    if (n > 0) {
        numero = n;
    }
    if (metri > 0) {
        mq = metri;
    }
    if (p > 0) {
        piano = p;
    }
    stato = st;
}

istream& operator>>(istream& inp, Stanza& room) {
    int temp;
    float temp1;
    string tempString;
    do {
        cout << endl << "Inserire numero di stanza: ";
        inp >> temp;
        room.setNumero(temp);
    } while (temp < 0);
    do {
        cout << endl << "Inserire mq: ";
        inp >> temp1;
        room.setMq(temp1);
    } while (temp1 < 0);
    do {
        cout << endl << "Inserire piano: ";
        inp >> temp;
        room.setPiano(temp);
    } while (temp < 0);
    cout << endl << "La stanza e` occupata? (s/n): ";
    inp >> tempString;
    (tempString == "s") ? room.setStato(true) : room.setStato(false);


}
ostream& operator<<(ostream& out, Stanza& room);