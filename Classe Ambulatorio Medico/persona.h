#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona {
    private:
        string nome, cognome;
    public:
        Persona();
        Persona(string name, string surname);
        virtual ~Persona();
        virtual void leggi() = 0;
        virtual void stampa() = 0;
};

#endif