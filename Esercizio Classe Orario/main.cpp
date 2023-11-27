#include <iostream>
#include "orario.h"

using namespace std;

int main() {
    Orario o1, o2;
    cout << "Data 1: " << endl;
    cin >> o1;
    cout << "Data 2: " << endl;
    cin >> o2;
    int intervallo = intervalloSecondi(o1, o2);
    cout << "L'intervallo tra: " << o1 << " e " << o2 << " e` di: " << intervallo << " secondi" << endl;
    Orario sum;
    sum = o1 + o2;
    cout << o1 << " + " << o2 << " = " << sum << endl;

    o1 = !o1;
    cout << o1;

    return 0;   
}