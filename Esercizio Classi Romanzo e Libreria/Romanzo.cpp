#include "romanzo.h"


Romanzo::Romanzo() {
    autore = "Undefined";
    titolo = "Undefined";
    prezzo = 0.0;
}
Romanzo::Romanzo(string code, string author, string title, float price) : Libro(code) {
    autore = author;
    titolo = title;
    prezzo = price;
    if (prezzo < 0) {
        prezzo = 0;
    }
}
Romanzo::~Romanzo() {

}
void Romanzo::setAutore(string author) {
    autore = author;
}
string Romanzo::getAutore() {
    return autore;
}
void Romanzo::setTitolo(string title) {
    titolo = title;
}
string Romanzo::getTitolo() {
    return titolo;
}
void Romanzo::setPrezzo(float price) {
    prezzo = price;
    if (prezzo < 0) {
        prezzo = 0;
    }
}
float Romanzo::getPrezzo() {
    return prezzo;
}
void Romanzo::setAll(string code, string author, string title, float price) {
    setISBN(code);
    autore = author;
    titolo = title;
    prezzo = price;
    if (prezzo < 0) {
        prezzo = 0;
    }
}
void Romanzo::leggi() {
    string temp;
    cout << endl << "Inserire il codice ISBN del libro: ";
    cin >> temp;
    setISBN(temp);
    cout << endl << "Inserire il nome dell'autore: ";
    cin >> autore;
    cout << endl << "Inserire il titolo del libro: ";
    cout >> titolo;
    do {
        cout << "Inserire il prezzo del libro: ";
        cin >> prezzo;
    }while (prezzo <= 0);
}
void Romanzo::stampa() {
    cout << endl << "ISBN: " << getISBN();
    cout << endl << "Autore: " << autore;
    cout << endl << "Titolo: " << titolo;
    cout << endl << "Prezzo: " << prezzo;
}
bool Romanzo::operator!=(Romanzo libro) {
    if (getISBN() != libro.getISBN() || autore != libro.autore || titolo != libro.titolo || prezzo != libro.prezzo) {
        return true;
    }
    return false;
}

ostream& operator<<(ostream& out, Romanzo& libro) {
    out << endl << "ISBN: " << libro.getISBN();
    out << endl << "Autore: " << libro.autore;
    out << endl << "Titolo: " << libro.titolo;
    out << endl << "Prezzo: " << libro.prezzo;

    return out;
}
