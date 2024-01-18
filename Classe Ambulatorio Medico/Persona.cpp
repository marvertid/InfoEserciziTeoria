#include "persona.h"

Persona::Persona() {
    nome = "Undefined";
    cognome = "Undefined";
}
Persona::Persona(string name, string surname) {
    nome = name;
    cognome = surname;
}
Persona::~Persona() {
    
}