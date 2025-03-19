#ifndef NODO_H
#define NODO_H

#include "tappa.h"

class Nodo {
	private:
		Tappa info;
		Nodo* ptrNext;
	public:
		Nodo();
		Nodo(Tappa t);
		Nodo(Tappa t, Nodo* p);
		~Nodo();
		Nodo* getPtrNext();
		Tappa getInfo();
		void setPtrNext(Nodo* p);
		void setInfo(Tappa t);
};

#endif
