#include "barattoloDiMarmellata.h"

BarattoloDiMarmellata::BarattoloDiMarmellata() {
    nome = "";
    codice = -1;
    Data temp;
    scadenza = temp;
    arrivo = temp;
}
BarattoloDiMarmellata::BarattoloDiMarmellata(string nome, int codice, Data scadenza, Data arrivo, float prezzo) {
    this->nome = nome;
    this->codice = codice;
    this->scadenza = scadenza;
    this->arrivo = arrivo;
    this->prezzo = prezzo;
}
void BarattoloDiMarmellata::setNome(string nome) {
    this->nome = nome;
}
void BarattoloDiMarmellata::setCodice(int codice) {
    this->codice = codice;
}
void BarattoloDiMarmellata::setScadenza(Data scadenza) {
    this->scadenza = scadenza;
}
void BarattoloDiMarmellata::setArrivo(Data arrivo) {
    this->arrivo = arrivo;
}
void BarattoloDiMarmellata::setPrezzo(float prezzo) {
    this->prezzo = prezzo;
}
string BarattoloDiMarmellata::getNome() {
    return nome;
}
int BarattoloDiMarmellata::getCodice() {
    return codice;
}
Data BarattoloDiMarmellata::getScadenza() {
    return scadenza;
}
Data BarattoloDiMarmellata::getArrivo() {
    return arrivo;
}
float BarattoloDiMarmellata::getPrezzo() {
    return prezzo;
}
