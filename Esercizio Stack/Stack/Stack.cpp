#include "stack.h"

Stack::Stack() {
	top = nullptr;
}
Stack::Stack(int dato) {
	top = nullptr;
	top->setDato(dato);
}
Stack::Stack(Stack& st) {
	Node* pAux = st.top;
	while (pAux) {
		insertTail(st.getTop()->getDato());
		pAux = pAux->getPtrNext();
	}
}
Stack::~Stack() {
	Node* pAux = top;
	while (pAux) {
		top = top->getPtrNext();
		delete pAux;
		pAux = top;
	}

}
bool Stack::push(int dato);
bool Stack::pop();
Node* Stack::getTop() {
	return top;
}
bool Stack::isEmpty();
void Stack::insertTail(int dato) {
	Node* pNew = new Node(nullptr, dato);
	Node* pAux = top;
	if (isEmpty()) {
		while (pAux->getPtrNext())
			pAux = pAux->getPtrNext();
		pAux->setPtrNext(pNew);
	}
	else {
		top = pNew;
	}

}