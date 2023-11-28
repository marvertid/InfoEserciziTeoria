#include "calendario.h"

using namespace std;

Calendario::Calendario() {
    nDate = 0;
    date = nullptr;
}

Calendario::Calendario(int nrDate) {
    nDate = nrDate;
    if (nDate > 0) {
        date = new Data[nDate];
    } else {
        nDate = 0;
        date = nullptr;
    }
}

Calendario::Calendario(int nrDate, Data *newDate) {
    nDate = nrDate;
    if (nDate > 0) {
        date = new Data[nDate];
        for (int i = 0; i < nDate; i++) {
            date[i] = newDate[i];
        }
    } else {
        nDate = 0;
        date = nullptr;
    }
}

Calendario::~Calendario() {
    delete[] date;
}

void Calendario::ordina() {
    int i, j = 0;
    Data temp;
    for (i = 0; i < nDate; i++) {
        temp = date[i];
        j = i - 1;
        while (j >= 0 && confrontaDate(date[j], temp) == 1) {
            date[j + 1] = date[j];
            j = j-1;
        }
        date[j+1] = temp;
    }
}

Calendario Calendario::operator+(const Calendario& newCalendario) {
    Calendario sum;
    sum.nDate = nDate + newCalendario.nDate;
    delete[] sum.date;
    sum.date = new Data[sum.nDate];
    for (int i = 0; i < nDate; i++) {
        sum.date[i] = date[i];
    }
    for (int i = nDate; i < newCalendario.nDate + nDate; i++) {
        sum.date[i] = newCalendario.date[i - nDate];
    }
    sum.ordina();

    return sum;
}

Calendario& Calendario::operator++() {
    
    for (int i = 0; i < nDate; i++) {
        int giorno = date[i].getGiorno();
        int mese = date[i].getMese();
        int anno = date[i].getAnno();
        Data temp(giorno, mese, anno);
        temp.setGiorno(giorno + 1);
        if (temp.valida()) {
            date[i].setGiorno(++giorno);
        } else {
            temp.setGiorno(1);
            temp.setMese(mese + 1);
            if (temp.valida()) {
                date[i].setMese(++mese);
                date[i].setGiorno(1);
            } else {
                date[i].setAnno(++anno);
                date[i].setMese(1);
                date[i].setGiorno(1);
            }
        }
    }
    return *this;
}
ostream& operator<<(ostream& outs, Calendario& newCalendario) {
    for (int i = 0; i < newCalendario.nDate; i++) {
        outs << endl << newCalendario.date[i].getGiorno() << "/" << newCalendario.date[i].getMese() << "/" << newCalendario.date[i].getAnno() << endl;
    }
    return outs;
}

istream& operator>>(istream& ins, Calendario& newCalendario) {
    delete[] newCalendario.date;
    do {
        cout << "Inserire il numero di date presenti: ";
        ins >> newCalendario.nDate;
    }while (newCalendario.nDate <= 0);
    newCalendario.date = new Data[newCalendario.nDate];
    int temp;
    for (int i = 0; i < newCalendario.nDate; i++) {
        cout << "Inserire il giorno della n." << i + 1 << " data: ";
        ins >> temp;
        newCalendario.date[i].setGiorno(temp);
        cout << "Inserire il mese della n." << i + 1 << " data: ";
        ins >> temp;
        newCalendario.date[i].setMese(temp);
        cout << "Inserire l'anno della n." << i + 1 << " data: ";
        ins >> temp;
        newCalendario.date[i].setAnno(temp);
    }
    return ins;
}