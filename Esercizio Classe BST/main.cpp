#include <iostream>
#include "bst.h"
using namespace std;

int main() {
    BST albero;

    albero.insertHelper(5);
    albero.insertHelper(1);
    albero.insertHelper(4);
    albero.insertHelper(7);
    albero.preorderHelper();
    cout << endl << endl;
    albero.simmetricHelper();

    cout << endl << "Somma: " << albero.simmetriSumHelper();

    cout << endl << "Numero di nodi: " << albero.postCountHelper();

    return 0;
}
