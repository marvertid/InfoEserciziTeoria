#include "napoletano.h"
#include "carta.h"
#include <iostream>

int main() {
    Napoletano newMazzo;
    Carta c1, c2, briscola;
    c1 = --newMazzo;
    c2 = --newMazzo;
    briscola.setNome("due");
    briscola.setNumero(3);
    briscola.setPunteggio(10);
    briscola.setSeme("spade");
    Carta cartaVincente = c1.confronta(c2, briscola);
    cout << cartaVincente;
    cout << c1;

    return 0;
}