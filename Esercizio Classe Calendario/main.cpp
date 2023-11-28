#include <iostream>
#include "calendario.h"

using namespace std;

int main () {
    Calendario c;
    cin >> c;
    c.ordina();
    cout << c;
    Calendario c1;
    cin >> c1;
    Calendario sum;
    sum = c + c1;
    cout << sum;
    return 0;
}