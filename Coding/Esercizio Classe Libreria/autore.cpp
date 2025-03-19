#include "autore.h"

Autore::Autore() {
    nome = "Undefined";
    cognome = "Undefined";
}

Autore::Autore(string name, string surname) {
    nome = name;
    cognome = surname;
    if (nome == "") {
        nome = "Undefined";
    }
    if (cognome == "") {
        cognome = "Undefined";
    }
}
Autore::~Autore() {

}

void Autore::setAutore(string name, string surname) {
    nome = name;
    cognome = surname;
    if (nome == "") {
        nome = "Undefined";
    }
    if (cognome == "") {
        cognome = "Undefined";
    }
}

void Autore::setNome(string name) {
    nome = name;
    if (nome == "") {
        nome = "Undefined";
    }
}

void Autore::setCognome(string surname) {
    cognome = surname;
    if (cognome == "") {
        cognome = "Undefined";
    }
}

string Autore::getNome() {
    return nome;
}

string Autore::getCognome() {
    return cognome;
}

istream& operator>>(istream& in, Autore& newAutore) {
    do {
        cout << "Inserire nome: ";
        //in >> a.nome; legge una stringa senza spazi
        getline(in, newAutore.nome);
    } while (newAutore.nome == "");
    do {
        cout << "Inserire cognome: "; 
        //in >> a.nome; legge una stringa senza spazi
        getline(in, newAutore.cognome);
    } while (newAutore.cognome == "");

    return in;
}

ostream& operator<<(ostream& out, const Autore& newAutore) {
    out << endl << newAutore.nome << " " << newAutore.cognome;
    
    return out;
}

bool Autore::operator==(const Autore &newAutore) {
    if (nome == newAutore.nome && cognome == newAutore.cognome) {
        return true;
    }
    return false;
}