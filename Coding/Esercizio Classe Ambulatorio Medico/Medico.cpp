#include "medico.h"

Medico::Medico() {
    specializzazione = "Undefined";
}
Medico::Medico(string name, string surname, string spec) : Persona(name, surname) {
    specializzazione = spec;
} 

Medico::~Medico() {

}
void Medico::leggi() {
    string name, surname, spec;
    cout << endl << "Inserire nome: ";
    cin >> name;
    cout << endl << "Inserire cognome: ";
    cin >> surname;
    cout << endl << "Inserire specializzazione: ";
    cin >> spec;
    Medico temp(name, surname, spec);
    (*this) = temp;
}

void Medico::stampa() {
    //boh
}