#include <iostream>
#include "persona.h"

using namespace std;

int main() {
    Persona p1;
    cout << "Persona 1:" << endl;
    cin >> p1;
    cout << p1;
    int eta = calcolaEta(p1);
    cout << eta;

    return 0;
}