#include <iostream>
#include "retta.h"

using namespace std;

int main() {
    Retta r(1, -2, 0);
    
    Point p(2, 1);
    if (r.isPointOnLine(p)) 
        cout << "si"; 
    else
        cout << "no";

    Retta r1(2, 4, -5), r2(4, 4, -1);

    if (r1.isPerpendicular(r2))
        cout << "perpendicolare" << endl;
    else
        cout << "non perpendicolare" << endl;

    Point intersezione = r1.intersection(r2);
    
    cout << "Il punto di intersezione è: (" << intersezione.getCoordX() << "," << intersezione.getCoordY() << ") " <<  endl;
    
    cout << angCoefficent(r) << " coefficente angolare della retta: ";
    r.print();
    return 0;
}