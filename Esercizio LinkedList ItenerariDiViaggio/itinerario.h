#ifndef ITINERARIO_H
#define ITINERARIO_H

#include "nodo.h"

class Itinerario {
	private:
		Nodo* head;
	public:
		Itinerario();
		Itinerario(Itinerario& i);
		~Itinerario();
		bool insertHead(Tappa t);
		bool insertTail(Tappa t);
		void displayNext();
		bool isEmpty();
		Itinerario& operator--(int);
		Itinerario& operator-(string n);
};

#endif