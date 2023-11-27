#include <iostream>
#include "persona.h"

using namespace std;

Persona::Persona() {
    nome = "Undefined";
    cognome = "Undefined";
    nascita.setData(1, 1, 1985);
}

Persona::Persona(string nome, string cognome, Data nascita) {
    this->nome = nome;
    this->cognome = cognome;
    this->nascita = nascita;
}

Persona::Persona(const Persona &newPersona) {
    nome = newPersona.nome;
    cognome = newPersona.cognome;
    nascita = newPersona.nascita;
}

Persona::~Persona() {

}

string Persona::getNome() {
    return nome;
}

string Persona::getCognome() {
    return cognome;
}

Data Persona::getData() {
    return nascita;
}

void Persona::setNome(string nome) {
    this->nome = nome;
}

void Persona::setCognome(string cognome) {
    this->cognome = cognome;
}

void Persona::setData(Data nascita) {
    this->nascita = nascita;
}

ostream& operator<<(ostream& outs, const Persona &newPersona) {
    outs << endl << newPersona.nome << ", " << newPersona.cognome << " - " << newPersona.nascita.getGiorno() << "/" << newPersona.nascita.getMese() << "/" << newPersona.nascita.getAnno() << endl;
    
    return outs;
}

istream& operator>>(istream& ins, Persona &newPersona) {
    int temp, isValid;
    cout << "Inserire nome: ";
    ins >> newPersona.nome;
    cout << "Inserire cognome: ";
    ins >> newPersona.cognome;
    do {
        cout << "Inserisci giorno di nascita: ";
        ins >> temp;
        newPersona.nascita.setGiorno(temp);
        cout << "Inserisci mese di nascita: ";
        ins >> temp;
        newPersona.nascita.setMese(temp);
        cout << "Inserisci giorno di nascita: ";
        ins >> temp;
        newPersona.nascita.setAnno(temp);
        isValid = newPersona.nascita.valida();
    } while (isValid != 1);

    return ins;
}

bool Persona::operator==(const Persona &newPersona) {
    if (nome == newPersona.nome && cognome == newPersona.cognome && nascita.getGiorno() == newPersona.nascita.getGiorno() && nascita.getMese() == newPersona.nascita.getMese() && nascita.getAnno() == newPersona.nascita.getAnno()) {
        return true;
    } 
    return false;
}

Persona Persona::operator>(const Persona &newPersona) {
    if (confrontaDate(nascita, newPersona.nascita) == 1) {
        return *this;
    }
    return newPersona;
}

Persona& Persona::operator=(const Persona &newPersona) {
    nome = newPersona.nome;
    cognome = newPersona.cognome;
    nascita = newPersona.nascita;

    return *this;
}

int calcolaEta(const Persona &newPersona) {
    Data oggi;
    cout << "Iserire la data di oggi: ";
    oggi.read();
    int anni = oggi.getAnno() - newPersona.nascita.getAnno();
    if (newPersona.nascita.getMese() > oggi.getMese() || (newPersona.nascita.getMese() == oggi.getMese() && newPersona.nascita.getGiorno() > oggi.getGiorno())) {
        anni--;
    }/*else if (newPersona.nascita.getMese() == oggi.getMese() && newPersona.nascita.getGiorno() < oggi.getGiorno()) {
        anni--;
    }*/
    return anni;
}

