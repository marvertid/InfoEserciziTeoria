#include <iostream>
#include <cmath>
#include "triangolo.h"

using namespace std;

Triangolo::Triangolo() {
    a.setCoords(0, 0);
    b.setCoords(1, 0);
    c.setCoords(0, 1);
}

Triangolo::Triangolo(Point a1, Point b1, Point c1) {
    a = a1;
    b = b1;
    c = c1;
    if ((a.getCoordX() == b.getCoordX() && a.getCoordY() == b.getCoordY()) || (b.getCoordX() == c.getCoordX() && b.getCoordY() == c.getCoordY()) || (c.getCoordX() == a.getCoordX() && c.getCoordY() == a.getCoordY())) {
        a.setCoords(0, 0);
        b.setCoords(1, 0);
        c.setCoords(0, 1);
    }
}



Triangolo::~Triangolo() {

}

Point Triangolo::getA() {
    return a;
}

Point Triangolo::getB() {
    return b;
}

Point Triangolo::getC() {
    return c;
}

void Triangolo::setA(Point a1) {
    a = a1;
}

void Triangolo::setB(Point b1) {
    b = b1;
}

void Triangolo::setC(Point c1) {
    c = c1;
}

void Triangolo::calcolaLati() {
    Point temp;
    temp.setCoordX(b.getCoordX() - a.getCoordX());
    temp.setCoordY(b.getCoordY() - a.getCoordY());
    ab = sqrt(temp.getCoordX() * temp.getCoordX() + temp.getCoordY() * temp.getCoordY());
    temp.setCoordX(c.getCoordX() - b.getCoordX());
    temp.setCoordY(c.getCoordY() - b.getCoordY());
    bc = sqrt(temp.getCoordX() * temp.getCoordX() + temp.getCoordY() * temp.getCoordY());
    temp.setCoordX(c.getCoordX() - a.getCoordX());
    temp.setCoordY(c.getCoordY() - a.getCoordY());
    ca = sqrt(temp.getCoordX() * temp.getCoordX() + temp.getCoordY() * temp.getCoordY());
}

int Triangolo::classifica() {
    calcolaLati();
    if (ab == bc && bc == ca) {
        return 1; 
    } else if (ab != bc && bc != ca) {
        return 2; 
    }
    return 3; 
}

float Triangolo::perimetro() {
    calcolaLati();
    return ab + bc + ca;
}

float Triangolo::area() {
    calcolaLati();
    float s;
    s = (ab + bc + ca) / 2;
    return sqrt(s * (s - ab) * (s - bc) * (s - ca));
}

bool Triangolo::isIsoperimetrico(Triangolo t) {
    calcolaLati();
    if (perimetro() == t.perimetro()) {
        return true; 
    } 
    return false; 
}

bool isVerticeInComune(Triangolo t1, Triangolo t2) {
    
    return true;
}

