#include "list.h"

List::List() {
	head = nullptr;
}
List::List(Product info) {
	head = nullptr;
	head->setInfo(info);
}
void List::insert(Product info) {
	if (!isEmpty()) {
		Node* pAux = head;
		Node* pNew = new Node(info);
		while (pAux->getPtrNext()) {
			pAux = pAux->getPtrNext();
		}
		pAux->setPtrNext(pNew);
	}
}
Product List::extract() {
	if (!isEmpty()) {
		Product extracted = head->getInfo();
		Node* pCanc = head;
		head = head->getPtrNext();
		delete pCanc;

		return extracted;
	}



}

bool List::isEmpty() {
	return (!head);
}