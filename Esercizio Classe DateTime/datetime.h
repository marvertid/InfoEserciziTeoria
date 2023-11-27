#ifndef DATETIME_H
#define DATETIME_H

#include "data.h"

class DateTime { 
    private:
        Data ggmmaa;
        int ore, minuti, secondi;
    public:
        DateTime();
        DateTime(int giorno, int mese, int anno, int o, int m, int s);
        ~DateTime();
        int getGiorno();
        int getMese();
        int getAnno();
        int getOre();
        int getMinuti();
        int getSecondi();
        void setGiorno(int giorno);
        void setMese(int mese);
        void setAnno(int anno);
        void setOre(int o);
        void setMinuti(int m);
        void setSecondi(int s);
        void print();
        void read();
        int isValid();
        int compare();
    friend DateTIme to24h();
};