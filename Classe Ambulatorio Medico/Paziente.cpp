#include "paziente.h"

Paziente::Paziente() {
    nascita = //todo
    cf = "Undefined";
}

Paziente::Paziente(Data birthdate, string code) {
    nascita = birthdate;
    cf = code;
}
void Paziente::leggi() {
    cout << endl << "Inserire data di nascita: ";
    cin >> nascita; // to do
    cout << endl << "Inserire cf: ";
    cin >> cf;
}
void Paziente::stampa() {
    cout << endl << "Data di nascita: " << nascita;
    cout << endl << "Cf: " << cf;
}