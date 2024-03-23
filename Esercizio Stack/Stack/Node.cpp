#include "node.h"

Node::Node() {
	ptrNext = nullptr;
	dato = 0;
}

Node::Node(Node* ptrNext, int dato) {
	this->ptrNext = ptrNext;
	this->dato = dato;
}

int Node::getDato() {
	return dato;
}
int Node::setDato(int dato) {
	this->dato = dato;
}
Node* Node::getPtrNext() {
	return ptrNext;
}

void Node::setPtrNext(Node* ptrNext) {
	this->ptrNext = ptrNext;
}