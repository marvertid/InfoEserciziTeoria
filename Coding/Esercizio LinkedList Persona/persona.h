#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona {
    private:
        string nome, cognome;
        int eta;
    public:
        Persona();
        Persona(string nome, string cognome, int eta);
        ~Persona();
        string getNome();
        string getCognome();
        int getEta();
        void setNome(string nome);
        void setCognome(string cognome);
        int setEta(int eta);
}

#endif