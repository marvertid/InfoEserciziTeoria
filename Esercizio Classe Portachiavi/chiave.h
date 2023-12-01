#ifndef CHIAVE_H
#define CHIAVE_H
#include <iostream>

using namespace std;

class Chiave {
    private:
        int nCamera;
        string nomeCliente;
    public:
        Chiave();
        Chiave(int nrCamera, string newNomeCliente);
        ~Chiave();
        void setNumeroCamera(int nrCamera);
        void setNomeCliente(string newNomeCliente);
        int getNumeroCamera();
        string getNomeCliente();
        bool operator!=(const Chiave &newChiave);
    friend istream& operator>>(istream& ins, Chiave &newChiave);
    friend ostream& operator<<(ostream& outs, const Chiave &newChiave);
};

#endif