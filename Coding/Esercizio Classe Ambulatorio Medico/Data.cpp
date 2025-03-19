#include <iostream>
#include "data.h"

using namespace std;

Data::Data() {
    giorno = 1;
    mese = 1;
    anno = 1582;
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

ostream& operator<<(ostream& out, Data& newData) {
    out << newData.getGiorno() << "/" << newData.getMese()<< "/" << newData.getAnno() << endl;
    return out;
}

istream& operator>>(istream& inp, Data& newData) {
    bool valid = true;
    int temp;
    do {
        cout << "Inserire una data valida: " << endl;
        do {
            cout << "Giorno: ";
            inp >> temp;
            newData.setGiorno(temp);
        }while (newData.getGiorno()< 1 || newData.getGiorno()> 31);
        do {
            cout << "Mese: ";
            inp >> temp;
            newData.setMese(temp);
        }while (newData.getMese() < 1 || newData.getMese() > 12);
        do {
            cout << "Anno: ";
            inp >> temp;
            newData.setAnno(temp);
        }while (newData.getAnno() < 1582 || newData.getAnno() > 2200);
        if (newData.getMese() == 2) {
            if ((newData.getAnno() % 100 == 0 && newData.getAnno() % 400 == 0) || (newData.getAnno() % 4 == 0)) {
                if (newData.getGiorno()> 29) {
                    valid = false;
                }
            }else if(newData.getGiorno()> 28) {
                valid = false;
            }
        }
        if ((newData.getMese() == 4 || newData.getMese() == 6 || newData.getMese() == 9 || newData.getMese() == 11) && newData.getGiorno()> 30) {
            valid = false;
        }
    } while (!valid);
}