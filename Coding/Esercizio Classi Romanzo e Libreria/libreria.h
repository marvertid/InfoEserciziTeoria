#ifndef LIBRERIA_H
#define LIBRERIA_H

class Libreria {
    private:
        static int capienzaMax;
        Romanzo* books;
        int dim;
    public:
        Libreria();
        ~Libreria();
        void leggi();
        int ricerca(Romanzo& book);
        Libreria& operator+(Romanzo& book);
        Libreria& operator--(int);
        Libreria& operator!();
    friend ostream& operator<<(ostream& out, Romanzo book);

}

#endif