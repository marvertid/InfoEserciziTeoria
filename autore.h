#ifndef AUTORE_H
#define AUTORE_H

#include <iostream>

using namespace std;

class Autore {
    private:
        string nome, cognome;
    public:
        Autore();
        Autore(string name, string surname);
        ~Autore();
        void setAutore(string name, string surname);
        void setNome(string name);
        void setCognome(string surname);
        string getNome();
        string getCognome();
        bool operator==(const Autore &newAutore);
    friend istream& operator>>(istream& in, Autore& newAutore);
    friend ostream& operator<<(ostream& out, const Autore& newAutore);
};

#endif