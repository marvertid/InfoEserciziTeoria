#ifndef NODE_H
#define	NODE_H	

#include <iostream>

class Node {
	private:
		Node* ptrNext;
		int dato;
	public:
		Node();
		Node(Node* ptrNext, int dato);
		int getDato();
		int setDato(int dato);
		Node* getPtrNext();
		void setPtrNext(Node* ptrNext);
};

#endif