#include <iostream>
#include "datetime.h"

using namespace std;

DateTime::DateTime() {
    ggmmaa.setGiorno(1);
    ggmmaa.setMese(1);
    ggmmaa.setAnno(1582);
    ore = 0;
    minuti = 0;
    secondi = 0;
}

DateTime::DateTime(int giorno, int mese, int anno, int o, int m, int s) {
    ggmmaa.setGiorno(giorno);
    ggmmaa.setMese(mese);
    ggmmaa.setAnno(anno);
    ore = o;
    minuti = m;
    secondi = s;
}