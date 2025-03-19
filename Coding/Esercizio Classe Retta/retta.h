#ifndef RETTA_H
#define RETTA_H

#include "point.h"

class Retta {
    private:
        float a, b, c; //ax + by + c = 0
    public:
        Retta();
        Retta(float a1, float b1, float c1);
        ~Retta();
        float getPendenzaX();
        float getPendenzaY();
        float getDisOrigine();
        void setPendenzaX(float a1);
        void setPendenzaY(float b1);
        void setDisOrigine(float c1);
        void read();
        void print();
        bool isPointOnLine(Point p);
        bool isParallel(const Retta &r);
        bool isPerpendicular(const Retta &r);
        Point intersection(const Retta &r);
    friend float angCoefficent(const Retta &r);
};

#endif