#ifndef BRANO_H
#define BRANO_H

#include <iostream>
using namespace std;

class Brano {
    private:
        string titolo;
        int durata, punt;
    public:
        Brano();
        Brano(string t, int d, int p);
        string getTitolo();
        int getD();
        int getP();
        void setTitolo(string t);
        void setD(int d);
        void setP(int p);
        void set(string t, int d, int p);
    friend ostream& operator<<(ostream& out, const Brano &brano);
    friend istream& operator>>(istream& in, const Brano &brano);
};

#endif