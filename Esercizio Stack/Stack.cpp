#include "stack.h"

Stack::Stack() {
    top = nullptr;
}
Stack::Stack(int data) {
    Node* pNew = new Node(data);
    top = pNew;
}
Stack::Stack(Stack& stack) {
    Node* pTemp = stack.getTop();
    int i = 0;
    while (pTemp) {
        i++;
        pTemp = pTemp->getPtrNext();
    }
    while (i > 0) {
        int j = i;
        while (j > 0) {
            j--;
            pTemp = pTemp->getPtrNext();
        }
        push(pTemp->getData());
        i--;
    }
}
Stack::~Stack() {
    Node* pAux;
    while (pAux) {
        pAux = top->getPtrNext();
        delete top;
        top = pAux;
    }
}
bool Stack::push(int data) {
    Node* pNew = new Node(data);
    if (!pNew) {
        cerr << "Allocazione fallita!";
        return false;
    }
    pNew->setPtrNext(top);
    top = pNew
    return true;
}
bool Stack::pop() {
    if (!isEmpty) {
        Node* pCanc = top;
        top = top->getPtrNext();
        delete pCanc;
        return true
    } else {
        return false;
    }
}

Node* Stack::getTop() {
    return top;
}

bool Stack::isEmpty() {
    return (!top);
}