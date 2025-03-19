#include "cars.h"

int Cars::counter = 0;

Cars::Cars() {
    targa = counter++;
    modello = "Undefined";
    nPosti = 0;
    annoImm = 0;
    prezzo = 0.0f;
}
Cars::Cars(string modello, int nPosti, int annoImm, float prezzo) {
    targa = counter++;
    this->modello = modello;
    this->nPosti = nPosti;
    this->annoImm = annoImm;
    this->prezzo = prezzo;
}
Cars::Cars(const Cars& c) {
    targa = c.targa;
    modello = c.modello;
    nPosti = c.nPosti;
    annoImm = c.annoImm;
    prezzo = c.prezzo;
}
int Cars::getTarga() {
    return targa;
}
string Cars::getModello() {
    return modello;
}
int Cars::getNPosti() {
    return nPosti;
}
int Cars::getAnnoImm() {
    return annoImm;
}
float Cars::getPrezzo() {
    return prezzo;
}
void Cars::setModello(string modello) {
    this->modello = modello;
}
void Cars::setNPosti(int nPosti) {
    this->nPosti = nPosti;
}
void Cars::setAnnoImm(int annoImm) {
    this->annoImm = annoImm;
}
void Cars::setPrezzo(float prezzo) {
    this->prezzo = prezzo;
}
void Cars::setTarga(int targa) {
    this->targa = targa;
}
