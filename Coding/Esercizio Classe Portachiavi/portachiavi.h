#ifndef PORTACHIAVI_H
#define PORTACHIAVI_H

#include <iostream>
#include "chiave.h"

using namespace std;


class Portachiavi {
    private:
        Chiave *arrChiavi;
        int nChiavi;
    public:
        Portachiavi();
        Portachiavi(int nrChiavi);
        Portachiavi(int nrChiavi, Chiave *newArrChiavi);
        ~Portachiavi();
        int getNChiavi();
        void setPortachiavi(int nrChiavi, Chiave *newArrChiavi);
        Portachiavi& operator++();
        Portachiavi& operator-(const Chiave &newChiave);
        Portachiavi& operator=(const Portachiavi &newPortachiavi);
    friend ostream& operator<<(ostream& outs, Portachiavi &newPortachiavi);
    friend istream& operator>>(istream& ins, Portachiavi &newPortachiavi);
};  

#endif