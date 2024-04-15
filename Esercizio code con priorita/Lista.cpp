#include "lista.h"

List::List() {
   head = nullptr;
}
List::List(string info, int priority) {
    head = new Node(info, priority);
    if (!head) {
        cerr << "Allocazione fallita!";
    }

}
List::List(const List& list) {
    head = nullptr;
    Node* ptrAux;
    ptrAux = list.head;
    while(ptrAux) {
        insertTail(ptrAux->getInfo(), ptrAux->getPriority());
        ptrAux = ptrAux->getNextPtr();
    }
}

List::~List() {
    Node* pAux;
    pAux = head;
    while(pAux) {
        head = head->getNextPtr();
        delete pAux;
        pAux = head;
    }
}
Node* List::getHead() {
    return head;
}
void List::insertHead(string info, int priority) {
    Node* pNew = new Node(info, priority);
    pNew->setPtrNext(head);
    head = pNew;
    if (!pNew) {
        cerr << "All fallita!";
    }
}
void List::insertTail(string info, int priority) {
    if (!isEmpty()) {
        Node* pNew = new Node(info, priority);
        Node* pAux = head;
        while (pAux->getNextPtr()) {
            pAux->getNextPtr();
        }
        pAux->setPtrNext(pNew);
    } else {
        insertHead(info, priority);
    }

}
bool List::removeElement(string info, int priority) {
    Node* pAux1, *pAux2, *pAux3;
    pAux1 = head;
    if (isEmpty()) {
        if (pAux1->getNextPtr()) {
            while (pAux1->getNextPtr() && pAux1->getNextPtr()->getInfo() != info && pAux1->getNextPtr()->getPriority() != priority) {
                pAux1 = pAux1->getNextPtr();
            }
            if(pAux1) {
                pAux2 = pAux1->getNextPtr();
                pAux3 = pAux2->getNextPtr();
                delete pAux2;
                pAux1->setPtrNext(pAux3);
                return true;
            }
            return false;
        } else {
            if (pAux1->getInfo() == info && pAux1->getPriority() == priority) {
                delete pAux1;
                return true;
            }
            return false;
        }
    }
    return false;


}
bool List::isEmpty() {
    return (!head);
}

