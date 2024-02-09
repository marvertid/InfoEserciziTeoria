#include <iostream>
#include "linkedList.h"

int main() {
	LinkedList lista;
	lista.insertHead(5);
	lista.insertTail(79);

    lista.display();

   // lista.displayRec(lista.getHead());
    lista.displayHelper();
	return 0;
}
