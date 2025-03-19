#ifndef CALENDARIO_H
#define CALENDARIO_H


#include <iostream>
#include "data.h"

using namespace std;

class Calendario {
    private:
        Data *date;
        int nDate;
    public:
        Calendario();
        Calendario(int nrDate);
        Calendario(int nrDate, Data *newDate);
        ~Calendario();
        void ordina();
        Calendario operator+(const Calendario& newCalendario);
        Calendario& operator++();
    friend ostream& operator<<(ostream& outs, Calendario& newCalendario);
    friend istream& operator>>(istream& ins, Calendario& newCalendario);
};

#endif