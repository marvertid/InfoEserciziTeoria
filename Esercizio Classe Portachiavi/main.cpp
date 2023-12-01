#include <iostream>
#include "portachiavi.h"

int main() {
    Portachiavi p1, p2;
    Chiave key;
    cin >> key;
    cin >> p1;
    p2 = p1 - key;
    cout << p2;
}