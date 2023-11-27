#include <iostream>
#include  "retta.h"

using namespace std;

Retta::Retta() {
    a = 1;
    b = 1;
    c = 0;
}

Retta::Retta(float a1, float b1, float c1) {
    a = a1;
    b = b1; 
    c = c1;
}

Retta::~Retta() {

}

float Retta::getPendenzaX() {
    return a;
}

float Retta::getPendenzaY() {
    return b;
}

float Retta::getDisOrigine() {
    return c;
}

void Retta::setPendenzaX(float a1) {
    a = a1;
}

void Retta::setPendenzaY(float b1) {
    b = b1;
}

void Retta::setDisOrigine(float c1) {
    c = c1;
}

void Retta::read() {
    cout << "Inserire l'equazione della retta: " << endl;
    cout << "ax + by + c = 0" << endl;
    cout << "a = "; 
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
}

void Retta::print() {
    cout << a << "x + " << b << "y + " << c << " = 0" << endl;
}

bool Retta::isPointOnLine(Point p) {
    if (p.getCoordX() * a + p.getCoordY() * b + c == 0) {
        return true;
    }else {
        return false;
    }
}

bool Retta::isParallel(const Retta &r) {
    if (a/b == r.a/r.b)
        return true;
    else
        return false;
}

bool Retta::isPerpendicular(const Retta &r) {
    if (-(a/b) * -(r.a/r.b) == 1)
        return true;
    else 
        return false;
}

Point Retta::intersection(const Retta &r) {
    Point p;
    float det;
    if (!isParallel(r)) {
        det = a * r.b - r.a * b;
        p.setCoordX((c * r.b - r.c * b) / det);
        p.setCoordY((a * r.c - r.a * c) / det);
    }else {
        cout << "Le rette non sono incidenti" << endl;
    }

    return p;
}

float angCoefficent(const Retta &r) {
    float m;
    if (r.b != 0)
        m = -(r.a/r.b);
    else
        m = 0;

    return m;
}