/*Realizzare la classe BSTDate, rappresentante un albero binario di ricerca i cui nodi contengono
delle date. Implementare: costruttore di default, distruttore, inserimento, visite, visualizzazione
della data più recente (valore massimo)
MARVERTI DIEGO 4AI*/

#include <iostream>
#include "bst.h"
using namespace std;

int main()
{
	BST albero;
	albero.insertHelper(Data(1, 1, 2000));
	albero.insertHelper(Data(20, 5, 2024));
	albero.insertHelper(Data(1, 5, 2004));
	albero.insertHelper(Data(5, 4, 2004));
	Data data = albero.recentDateHelper();
	albero.preoroderHelper();
}
