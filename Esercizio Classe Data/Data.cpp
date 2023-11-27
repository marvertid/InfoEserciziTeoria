#include <iostream>
#include "data.h"

using namespace std;

Data::Data() {

}

Data::Data(int g, int m, int a) {
    giorno = g;
    mese = m;
    anno = a;
    if(giorno < 1 || giorno > 31) {
        giorno = 1;
    }
    if(mese < 1 || mese > 12) {
        mese = 1;
    }
    if(anno < 1582 || anno > 2200) {
        anno = 2000;
    }
}

Data::Data(const Data &d) {
    giorno = d.giorno;
    mese = d.mese;
    anno = d.anno;
}

Data::~Data() {

}

int Data::getGiorno() {
    return giorno;
}

int Data::getMese() {
    return mese;
}

int Data::getAnno() {
    return anno;
}

void Data::print() {
    cout << giorno << "/" << mese << "/" << anno << endl;
}

void Data::read() {
    bool valid = true;
    do {
        cout << "Inserire una data valida: " << endl;
        do {
            cout << "Giorno: ";
            cin >> giorno;
        }while (giorno < 1 || giorno > 31);
        do {
            cout << "Mese: ";
            cin >> mese;
        }while (mese < 1 || mese > 12);
        do {
            cout << "Anno: ";
            cin >> anno;
        }while (anno < 1582 || anno > 2200);
        if (mese == 2) {
            if ((anno % 100 == 0 && anno % 400 == 0) || (anno % 4 == 0)) {
                if (giorno > 29) {
                    valid = false;
                }
            }else if(giorno > 28) {
                valid = false;
            }
        }
        if ((mese == 4 || mese == 6 || mese == 9 || mese == 11) && giorno > 30) {
            valid = false;
        } 
    } while (!valid);
}

int Data::valida() {
    int valid = 1;
    if (mese == 2) {
        if ((anno % 100 == 0 && anno % 400 == 0) || (anno % 4 == 0)) {
            if (giorno > 29) {
                valid = 0;
            }
        }else if(giorno > 28) {
            valid = 0;
        }
    }
    if ((mese == 4 || mese == 6 || mese == 9 || mese == 11) && giorno > 30) {
        valid = 0;
    }

    return valid; 
}

int confrontaDate(Data d1, Data d2) { //0 = uguali, 1 = d1 antecedente, 2 = d2 antecedente.
    int flag = 2;
    
    if (d1.anno == d2.anno && d1.mese == d2.mese && d1.giorno == d2.giorno) {
        flag = 0;
    } else if (d1.anno > d2.anno && d1.mese > d2.mese && d1.giorno > d2.giorno) {
        flag = 1;
    }

    return flag;
}
