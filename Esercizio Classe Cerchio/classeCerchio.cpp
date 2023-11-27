//MARVERTI DIEGO 4AI

#include <iostream>
#include "ClasseCerchio.h"
#define PI 3.1415

using namespace std;

Cerchio::Cerchio() {
    float circonferenza = raggio = diametro = area = 0;
}

Cerchio::Cerchio(float cir, float r, float d) {
    circonferenza = cir;
    raggio = r;
    diametro = d;
    if (circonferenza < 0) {
        circonferenza = 0;
    }
    if (raggio < 0) {
        raggio = 0;
    }
    if (diametro < 0) {
        diametro = 0;
    }
}

Cerchio::~Cerchio() {

}

void Cerchio::setCirconferenza(float cir) {
    circonferenza = cir;
    if (circonferenza < 0) {
        circonferenza = 0;
    }
}

void Cerchio::setDiametro(float d) {
    diametro = d;
    if (diametro < 0 || (diametro > 0 && diametro / 2 != raggio)) {
        diametro = raggio * 2;
    }
}

void Cerchio::setRaggio(float r) {
    raggio = r;
    if (raggio < 0 || (raggio > 0 && raggio * 2 != diametro)) {
        raggio = diametro / 2;
    }
}

void Cerchio::setArea() {
    area = a;
    if (area < 0) {
        area = 0;
    }
}

float Cerchio::getCirconferenza() {
    return circonferenza;
}

float Cerchio::getRaggio() {
    return raggio;
}

float Cerchio::getDiametro() {
    return diametro;
}

float Cerchio::getArea() {
    return area;
}
void Cerchio::readCerchio() {
    cout << "Inserire la circonferenza: ";
    cin >> setCirconferenza(float c);
    cout << "Inserire la raggio: ";
    cin >> setRaggio(float r);
    cout << "Inserire la diametro: ";
    cin >> setDiametro(float d);
    cout << "Inserire la area: ";
    cin >> setArea(float a);
}

void Cerchio::printCerchio() {
    cout << "Circonferenza: " float c = getCirconferenza() << endl;
    cout << "Raggio: " float r = getRaggio() << endl;
    cout << "Diametro: " float d = getDiametro() << endl;
    cout << "Area: " float a = getArea() << endl;
}

float Cerchio::calcArea() {
    area = (raggio * raggio) * PI;

    return area;
}

float Cerchio::calcCirconferenza() {
    circonferenza = 2 * PI * raggio;

    return circonferenza;
}

void Cerchio::duobleRCerchio(cost Cerchio& newC) {
    c.circonferenza = 2 * circonferenza;
    c.raggio = 2 * raggio
    c.diametro = 2 * diametro
    c.area = c.raggio * c.raggio * PI
}