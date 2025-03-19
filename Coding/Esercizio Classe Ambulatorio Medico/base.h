#ifndef BASE_H
#define BASE_H
#include "paziente.h"
#include "medico.h"
class Base : protected Medico {
    private:
        static int nrMax;
        int dim;
        Paziente* p;
    public:
        Base();
        Base(const Base& b);
        ~Base();
        void leggi();
        void stampa();
        Base& operator++();
        Base& operator-(const Paziente& p);
};

#endif