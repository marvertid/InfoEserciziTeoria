#ifndef FRAZIONE_H
#define FRAZIONE_H

class Frazione {
    private:
        int numeratore, denominatore;
    public:
        Frazione();
        Frazione(int num, int den);
        Frazione(const Frazione &f);
        ~Frazione();
        void setNumeratore(int num);
        void setDenominatore(int den);
        int getNumeratore();
        int getDenominatore();
        Frazione somma(const Frazione &f);
        Frazione differenza(const Frazione &f);
        Frazione prodotto(const Frazione &f);
        Frazione rapporto(const Frazione &f);
        void readNumDen(int num, int den);
        void stampaFrazione();
};

#endif