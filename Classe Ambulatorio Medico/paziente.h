#ifndef PAZIENTE_H
#define PAZIENTE_H
#include "data.h"

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