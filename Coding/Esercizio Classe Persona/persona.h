#ifndef PERSONA_H
#define PERSONA_H
#include "data.h"

using namespace std;

class Persona {
    private:
        string nome, cognome;
        Data nascita;
    public:
        Persona();
        Persona(string nome, string cognome, Data nascita);
        Persona(const Persona &newPersona);
        ~Persona();
        string getNome();
        string getCognome();
        Data getData();
        void setNome(string nome);
        void setCognome(string cognome);
        void setData(Data nascita);
    friend ostream& operator<<(ostream& outs, const Persona &newPersona);
    friend istream& operator>>(istream& ins, Persona &newPersona);
      bool operator==(const Persona &newPersona);
        Persona operator>(const Persona &newPersona);
        Persona& operator=(const Persona &newPersona);
    friend int calcolaEta(const Persona &newPersona);

};

#endif