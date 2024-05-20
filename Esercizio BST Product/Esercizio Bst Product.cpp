#include <iostream>
#include "bst.h"
#include "list.h"
using namespace std;



int main()
{
	List Prodotti;
	BST alberoProdotti;
	Prodotti.insert(Product(3, 12.3f));
	Prodotti.insert(Product(12, 6.3f));
	Prodotti.insert(Product(5, 78.3f));
	cout << "ciao";
	Prodotti.extract();
	alberoProdotti.insertHelper(Product(1, 1.1f));
	cout << "hello";
	alberoProdotti.postorderHelper();
	cout << endl << "numero di elementi: " << !alberoProdotti;
	cout << endl << "prodotto trovato: " << alberoProdotti % Product(3, 12.3f);


}
