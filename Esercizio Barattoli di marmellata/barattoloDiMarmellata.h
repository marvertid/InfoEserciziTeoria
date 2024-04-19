#ifndef BARATTOLODIMARMELLATA_H
#define BARATTOLODIMARMELLATA_H

#include <iostream>
#include "data.h"
using namespace std;

class BarattoloDiMarmellata {
    private:
        string nome;
        int codice;
        Data scadenza;
        Data arrivo;
        float prezzo;
    public:
        BarattoloDiMarmellata();
        BarattoloDiMarmellata(string nome, int codice, Data scadenza, Data arrivo, float prezzo);
        void setNome(string nome);
        void setCodice(int codice);
        void setScadenza(Data scadenza);
        void setArrivo(Data arrivo);
        void setPrezzo(float prezzo);
        string getNome();
        int getCodice();
        Data getScadenza();
        Data getArrivo();
        float getPrezzo();
};

#endif
