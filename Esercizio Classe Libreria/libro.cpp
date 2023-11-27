#include <iostream>
#include "libro.h"

using namespace std;

//Costruttore di default
Libro::Libro(){
    titolo = "undefined";
    cEdit = "undefined";
    prezzo = 0.0;
    nAutori = 0; //le classi Libro ed Autore sono legate da
    a = nullptr; // aggregazione, pertanto un libro può essere
    // istanziato anche senza autori
}
//Costruttore con parametri, senza elenco degli autori
Libro::Libro(string t, string ed, float p, int n) {
    titolo = t;
    cEdit = ed;
    prezzo = p;
    if(prezzo < 0)
    prezzo = 0.0;
    nAutori = n;
    if (nAutori > 0 && nAutori <= 5) {
        a = new Autore[nAutori]; //alloca un array di nAutori elementi
        //inizializzati con i valori previsti
        //dal costruttore di default per la
        //classe Autore
    } else {
        nAutori = 0;
        a = nullptr;
    }
}
//Costruttore con parametri, con elenco degli autori
Libro::Libro(string t, string ed, float p, Autore *aa, int n){
    titolo = t;
    cEdit = ed;
    prezzo = p;
    if(prezzo < 0)
    prezzo = 0.0;
    nAutori = n;
    if(nAutori > 0 && nAutori <= 5){
    a = new Autore[nAutori];
    for (int i = 0; i < nAutori; i++) {
        a[i] = aa[i]; //ciclo che scorre l'array aa e copia
        //le sue componenti (autori) nell'array
        //a, attributo della classe Libro,
        //precedentemente allocato
    }
    } else {
        nAutori = 0;
        a = nullptr;
    }
}
//Costruttore copia
Libro::Libro(const Libro& l){
    titolo = l.titolo;
    cEdit = l.cEdit;
    prezzo = l.prezzo;
    nAutori = l.nAutori;
    a = new Autore[nAutori];
    for(int i = 0; i < nAutori; i++){
        a[i] = l.a[i]; //ciclo che scorre l'array a del libro l,
        //passato come parametro, e copia
        //le sue componenti nell'array
        //a del'istanza chiamante
    }
}
//distruttore
Libro::~Libro(){
    delete[] a;
}
void Libro::setTitolo(string t){
    titolo = t;
}
void Libro::setEditore(string ed){
    cEdit = ed;
}

void Libro::setAutori(Autore *aa, int n){
    delete[] a; //l'array di autori a deve essere
    //deallocato poichè potrebbe contenere
    //gli autori di un libro precedentemente
    //allocato nell'istanza chiamante
    nAutori = n;
    if(nAutori > 0 && nAutori <= 5){
        a = new Autore[nAutori];
        for(int i = 0; i < nAutori; i++){
            a[i] = aa[i];
        }
    } else {
        nAutori = 0;
        a = nullptr;
    }
}

void Libro::setPrezzo(float p){
    prezzo = p;
    if (prezzo < 0)
    prezzo = 0;
}

string Libro::getTitolo(){
    return titolo;
}
string Libro::getEditore(){
    return cEdit;
}
int Libro::getNrAutori(){
    return nAutori;
}
float Libro::getPrezzo(){
    return prezzo;
}

void Libro::stampaAutori(){
    for(int i = 0; i < nAutori; i++)
    cout << a[i]; //solo se nella classe Autore è
    //presente l'overloading dell’operatore <<
}
void Libro::leggiAutori(){
    do {
        cout << endl << "Quanti sono gli autori del libro? ";
        cin >> nAutori;
    } while(nAutori < 0 || nAutori > 5);
    delete[] a;
    a = new Autore[nAutori];
    for(int i = 0; i < nAutori; i++){
        cin >> a[i]; //solo se nella classe Autore è
        //presente l'overloading dell’operatore >>
    }
}

//Overloading dell’operatore <<
ostream& operator<<(ostream& out, const Libro& l){
//il ciclo for stampa l'elenco degli autori, ma in questo caso
//non è possibile usare il metodo stampaAutori poichè il libro
//passato come parametro potrebbe essere una costante, quindi
//non utilizzabile come istanza chiamante
    for(int i = 0; i < l.nAutori; i++){
        out << l.a[i] << " ";
    }
    out << ",\"" << l.titolo << "\", ed. " << l.cEdit;
    out << ", euro " << l.prezzo;
    return out;
}

//Overloading dell’operatore >>
istream& operator>>(istream& in, Libro& l){
    l.leggiAutori();
    cout << endl << "Inserire il titolo: ";
    fflush(stdin);
    getline(in, l.titolo);
    //legge una stringa formata da più parole
    cout << endl << "Inserire la casa editrice: ";
    fflush(stdin);
    getline(in, l.cEdit);
    do {
        cout << endl << "Inserire il prezzo: ";
        in >> l.prezzo;
    } while(l.prezzo < 0);
    return in;
}

bool Libro::operator==(const Libro &newLibro) {
    if (titolo == newLibro.titolo && cEdit == newLibro.cEdit && prezzo == newLibro.prezzo && nAutori == newLibro.nAutori) {
        int i = 0;
        while (a[i] == newLibro.a[i] && i < nAutori) {
            i++;
        }
        if (i == nAutori) {
            return true;
        }
    }
    return false;
}