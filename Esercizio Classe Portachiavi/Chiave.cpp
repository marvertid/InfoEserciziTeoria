#include "chiave.h"

using namespace std;

Chiave::Chiave() {
    nCamera = -1;
    nomeCliente = "Undefined";
}

Chiave::Chiave(int nrCamera, string newNomeCliente) {
    nCamera = nrCamera;
    nomeCliente = newNomeCliente;
    if (nrCamera < 0) {
        nCamera = -1;
        nomeCliente = "Undefined";
    }
}

Chiave::~Chiave() {

}

void Chiave::setNumeroCamera(int nrCamera) {
    if (nrCamera > 0) {
        nCamera = nrCamera;
    } else {
        nCamera = -1;
    }
}

void Chiave::setNomeCliente(string newNomeCliente) {
    nomeCliente = newNomeCliente;
}

int Chiave::getNumeroCamera() {
    return nCamera;
}

string Chiave::getNomeCliente() {
    return nomeCliente;
}

bool Chiave::operator!=(const Chiave &newChiave) {
    if (nCamera == newChiave.nCamera && nomeCliente == newChiave.nomeCliente) {
        return false;
    }

    return true;
}

istream& operator>>(istream& ins, Chiave &newChiave) {
    do {
        cout << endl << "Inserire il numero della camera: ";
        ins >> newChiave.nCamera;
    }while (newChiave.nCamera < 0);
    cout << endl << "Inserire il nome del cliente: ";
    ins >> newChiave.nomeCliente;
    
    return ins;
}

ostream& operator<<(ostream& outs, const Chiave &newChiave) {
    outs << endl << "Numero camera: " << newChiave.nCamera << endl;
    outs << endl << "Nome cliente: " << newChiave.nomeCliente << endl;

    return outs;
}