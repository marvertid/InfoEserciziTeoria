#include "nodo.h"

Nodo::Nodo() {
	info.setLat(Coordinata lat);
	info.setLong(Coordinata long);
	info.setNome("Undefined");
	info.setTempo(0);
	ptrNext = nullptr;
}
Nodo::Nodo(Tappa t) {
	info.setLat(t.getLat());
	info.setLong(t.getLong());
	info.setNome(t.getNome());
	info.setTempo(t.getTempo());
	ptrNext = nullptr;
}
Nodo::Nodo(Tappa t, Nodo* p) {
	info.setLat(t.getLat());
	info.setLong(t.getLong());
	info.setNome(t.getNome());
	info.setTempo(t.getTempo());
	ptrNext = p;
}
Nodo::~Nodo() {

}

Nodo* Nodo::getPtrNext() {
	return ptrNext;
}

Tappa Nodo::getInfo() {
	return info;
}

void Nodo::setPtrNext(Nodo* p) {
	ptrNext = p;
}
void Nodo::setInfo(Tappa t) {
	info = t;
}