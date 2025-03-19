#include <iostream>
#include "orario.h"

using namespace std;

Orario::Orario() {
    ore = 0;
    minuti = 0;
    secondi = 0;
}

Orario::Orario(int ore, int minuti, int secondi) {
    this->ore = ore;
    this->minuti = minuti;
    this->secondi = secondi;

    if (ore > 24 || minuti > 60 || secondi > 60) {
        this->ore = 0;
        this->minuti = 0;
        this->secondi = 0;      
    }
}

Orario::~Orario() {

}

int Orario::getOre() {
    return ore;
}

int Orario::getMinuti() {
    return minuti;
}

int Orario::getSecondi() {
    return secondi;
}

void Orario::setOre(int ore) {
    this->ore = ore;
}

void Orario::setMinuti(int minuti) {
    this->minuti = minuti;
}

void Orario::setSecondi(int secondi) {
    this->secondi = secondi;
}

bool Orario::validaOrario() {
    if(ore <= 24 && minuti < 60 && secondi < 60) {
        return true;
    }
    return false;
}

ostream& operator<<(ostream &outs, const Orario &newOrario) {
    outs << newOrario.ore << ":" << newOrario.minuti << ":" << newOrario.secondi;

    return outs;
}

istream& operator>>(istream &ins, Orario &newOrario) {
    do {
        cout << "Inserire Ore: ";
        ins >> newOrario.ore;
        cout << "Inserire Minuti: ";
        ins >> newOrario.minuti;
        cout << "Inserire Secondi: ";
        ins >> newOrario.secondi;
    }while (!newOrario.validaOrario());

    return ins;
}

bool Orario::operator==(const Orario &newOrario) {
    if (ore == newOrario.ore && minuti == newOrario.minuti && secondi == newOrario.secondi) {
        return true;
    }
    return false;
}

Orario Orario::operator+(const Orario &newOrario) {
    Orario sum;
    sum.ore = ore + newOrario.ore;
    sum.minuti = minuti + newOrario.minuti;
    sum.secondi = secondi + newOrario.secondi;
    if (sum.secondi >= 60) {
        sum.minuti += sum.secondi / 60;
        sum.secondi = sum.secondi % 60;
    }
    if (sum.minuti >= 60) {
        sum.ore += sum.minuti / 60;
        sum.minuti = sum.minuti % 60;
    }
    if (sum.ore >= 24) {
        sum.ore = sum.ore % 24;
    }
    return sum;
}

Orario& Orario::operator!() {
    minuti = 0;
    secondi = 0;

    return *this;
}

/*Orario Orario::operator!(int) {
    Orario newOrario(ore, minuti, secondi);
    minuti = 0
    secondi = 0;
    return newOrario;
}*/

int intervalloSecondi(const Orario &newOrario1, const Orario &newOrario2) {
    int intervalloSecondi, intervalloMinuti, intervalloOre;
    intervalloOre = newOrario1.ore - newOrario2.ore;
    intervalloMinuti = newOrario1.minuti - newOrario2.minuti;
    intervalloSecondi = newOrario1.secondi - newOrario2.secondi + intervalloMinuti * 60 + intervalloOre * 3600;

    return intervalloSecondi;
}
