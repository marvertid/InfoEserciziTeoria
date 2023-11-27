#ifndef TRIANGOLO_H
#define TRIANGOLO_H

#include "point.h"

class Triangolo {
    private:
        Point a, b, c;
        float ab, bc, ca;
    public:
        Triangolo(); //default triangolo rettangolo
        Triangolo(Point a1, Point b1, Point c1);
        ~Triangolo();
        Point getA();
        Point getB();
        Point getC();
        void setA(Point a1);
        void setB(Point b1);
        void setC(Point c1);
        void calcolaLati();
        int classifica(); // 1 = equilatero, 2 = scaleno, 3 = isoscele
        float perimetro();
        float area();
        bool isIsoperimetrico(Triangolo t);
    friend bool isVerticeInComune(Triangolo t1, Triangolo t2); // ????
};

#endif