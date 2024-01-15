#include "libreria.h"
#include <iostream>

using namespace std;


Libreria::capienzaMax = 100;

Libreria::Libreria() {
    books = null;
    dim = 0;
    capienzaMax--;
}
Libreria::~Libreria() {
    delete[] books;
}
void Libreria::leggi() {
    do {
        cout << endl <<"Inserire il numero di romanzi da inserire: ";
        cout >> dim;
    }while (dim < 0 || dim > capienzaMax);    
    delete[] books;
    Romanzo* books = new Romanzo[dim];
    for (int i = 0; i < dim; i++) {
        cout << endl << "Inserire il codice ISBN del libro: ";
        cin >> books[i].ISBN;
        cout << endl << "Inserire il nome dell'autore: ";
        cin >> books[i].autore;
        cout << endl << "Inserire il titolo del libro: ";
        cout >> books[i].titolo;
        do {
            cout << "Inserire il prezzo del libro: ";
            cin >> books[i].prezzo;
        }while (books[i].prezzo <= 0);
    }
}
int Libreria::ricerca(Romanzo& book) {
    int i;
    for (i = 0; i < dim && books[i] != book; i++);
    (i < dim) ? return i : return -1;
}

Libreria::Libreria& operator+(Romanzo& book) {
    Romanzo* temp = new Romanzo[dim];
    for (int i = 0; i < dim; i++); {
        temp[i] = books[i];
    }
    delete[] books;
    Romanzo* books = new Romanzo[dim + 1];
    for (int i = 0; i < dim; i++) {
        books[i] = temp[i];
    }
    delete[] temp;
    books[dim - 1] = book;

    return *this;

}
Libreria::Libreria& operator--(int);
Libreria::Libreria& operator!();
ostream& operator<<(ostream& out, Romanzo book);