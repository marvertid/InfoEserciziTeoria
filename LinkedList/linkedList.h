#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"

class LinkedList{
	private:
		Node* head; //puntatore alla testa della lista
				    //puntatore al primo nodo della lista concatenata semplice

        void displayRec(Node* head);
    public:
		LinkedList();				//costruttore di default
//		LinkedList(int el);  		//costruttore con parametri: istanzia una lista con un unico nodo
		LinkedList(LinkedList &lista);		//costruttore copia
		~LinkedList();				//distruttore
//		Node* getHead();
		bool isEmpty();			//restituisce true se la lista � vuota
		void display(); 		//stampa dei valori della lista
		bool insertHead(int data);	//inserimento in testa
		bool insertTail(int data); 	//inserimento in coda
		void displayHelper(); //Helper function
		bool remove(int data);
		Node* search(int data);
		int counter();
		float avg();
		int max();
		int sumEven();
		int sumOdd();
		LinkedList sqInsertTail();
		bool removeEvenHead();
		void multiplyNeg();
		bool sort();
	friend istream& operator>>(istream& in, LinkedList &lista);
		Node operator--();
		LinkedList& operator+(LinkedList &lista);

};
#endif
