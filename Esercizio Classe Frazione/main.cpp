#include <iostream>
#include "frazione.h"

using namespace std;

int main() {
    Frazione f1(4, 10), f2(3, 11), f3;
    f3 = f1.somma(f2);
    f3.stampaFrazione();
    cout << f2.getNumeratore() << endl;
    f3.setNumeratore(43);
    cout << f3.getNumeratore() << endl;
    f2.readNumDen(4, 3);
    f2.stampaFrazione();
    
    return 0;
}