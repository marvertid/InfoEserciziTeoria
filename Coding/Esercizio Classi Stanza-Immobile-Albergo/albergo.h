#ifndef ALBERGO_H
#define ALBERGO_H
#include "immobile.h"
#include "stanza.h"

class Albergo : public Immobile {
    private:
        static float costoU;
        Stanza* s;
        int dim;
    public:
        Albergo();
        ~Albergo();
        void inizializza();
        Stanza operator--();
        float operator!();
        int nSTanzeLibere();
        float operator*(int piano);
    friend float operator*(int piano, Albergo& newAlbergo);
};

#endif