#include "persona.h"

Persona::Persona() {
    nome = "Undefined";
    cognome = "Undefined";
    eta = -1;
}

Persona::Persona(string nome, string cognome, int eta) {
     this->nome = nome;
     this->cognome = cognome;
     this->eta = eta;
}

Persona::~Persona() {

}

string Persona::getNome() {
    return nome;
}

string Persona::getCognome() {
    return cognome;
}
int Persona::getEta() {
    return eta;
}
void Persona::setNome(string nome) {
    this->nome = nome;
}
void Persona::setCognome(string cognome) {
    this->cognome = cognome;
}
int Persona::setEta(int eta) {
    this->eta = eta;
}