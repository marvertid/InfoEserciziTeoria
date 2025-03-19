#include <iostream>
#include "data.h"
using namespace std;

int main() {
    Data d1(31, 3, 2018), d2(16, 7, 2018);
    int valid;
    cout << (valid = confrontaDate(d1, d2)) << endl;

    return 0;
}