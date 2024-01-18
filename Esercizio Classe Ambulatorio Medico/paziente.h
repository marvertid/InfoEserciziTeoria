#ifndef PAZIENTE_H
#define PAZIENTE_H
#include "data.h"
#include "persona.h"
#include <iostream>

using namespace  std;


class Paziente : public Persona {
    private:
        Data nascita;
        string cf;
    public:
        Paziente();
        Paziente(Data birthdate, string code);
        void leggi();
        void stampa();
};

#endif