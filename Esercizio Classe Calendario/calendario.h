#ifndef CALENDARIO_H
#define CALENDARIO_H

#include "data.h"
#include <iostream>

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
        Calendario ordina();
        Calendario operator+(const Calendario& newCalendario);
        Calendario operator++();
    friend ostream& operator<<(ostream& outs, const Calendario& newCalendario);
    friend istream& operator>>(istream& ins, Calendario& newCalendario);
}

#endif