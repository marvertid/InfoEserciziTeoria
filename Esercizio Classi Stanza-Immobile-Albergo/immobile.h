#ifndef IMMOBILE_H
#define IMMOBILE_H
#include <iostream>

using namespace std;

class Immobile {
    protected:
        string indirizzo; 
    public:
        Immobile();
        virtual ~Immobile();
        virtual void inizializza() = 0; 
};

#endif