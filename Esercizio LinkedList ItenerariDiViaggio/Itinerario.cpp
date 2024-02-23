#include "itinerario.h"

Itinerario::Itinerario() {
	head = nullptr;
}
Itinerario::Itinerario(Itinerario& i) {
	head = nullptr;
	Nodo* pAux = i.head;
	while (pAux) {
		this->insertTail(pAux->getInfo());
		pAux = pAux->getPtrNext();
	}
}
Itinerario::~Itinerario() {
	Nodo* pAux = head;
	while (pAux) {
		pAux = pAux->getPtrNext();
		delete[] head;
		head = pAux;
	}
}
bool Itinerario::insertHead(Tappa t) {
	Nodo* pNew = new Nodo(t, head);
	if (pNew) {
		head = pNew;
		return true;
	}
	cout << "Allocazione fallita!";
	return false;

}
bool Itinerario::insertTail(Tappa t) {
	Nodo* pNew = new Nodo(t);
	if (pNew) {
		if (isEmpty()) {
			head = pNew;
		}
		else {
			Nodo* pAux = head;
			while (pAux->getPtrNext()) {
				pAux = pAux->getPtrNext();
			}
			pAux->setPtrNext(pNew);
		}
		return true;
	}
	return false;
}

bool Itinerario::isEmpty() {
	if (head) return false;
	return true;
}
void Itinerario::displayNext() {
	cout << endl << "Prossima Tappa: " + head->getPtrNext()->getInfo();
}
Itinerario& Itinerario::operator--(int) {
	if (isEmpty()) {
		cout << "Lista vuota!";
		return (*this);
	}

	Tappa tappaVisitata = head->getInfo();
	Nodo* pAux = head;
	head = head->getPtrNext();
	delete pAux;
	Nodo* pi = head, *pj;

	while (pi->getPtrNext()) {
		pj = pi->getPtrNext();
		while (pj) {
			if (tappaVisitata.distanza(pj) < tappaVisitata.distanza(pi))
				swap(pi, pj);
			pj = pj->getPtrNext();
		}
		pi = pi->getPtrNext();
	}

	return (*this);

}
Itinerario& Itinerario::operator-(string n) {

}