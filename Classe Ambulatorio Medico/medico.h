#ifndef MEDICO_H
#define MEDICO_H
#include "persona.h"

using namespace std;

class Medico : public Persona {
    protected:
        string specializzazione;
    public:
        Medico();
        Medico(string name, string surname, string spec);
        virtual ~Medico();
        virtual void leggi();
        virtual void stampa();
};

#endif