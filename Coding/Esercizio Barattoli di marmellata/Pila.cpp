#include "pila.h"

Stack::Stack() {
    top = nullptr;
}
Stack::Stack(BarattoloDiMarmellata barattolo) {
    top = nullptr;
    top->setBarattolo(barattolo);
}
Stack::Stack(Stack& stack) {
    if (isEmpty()) {
        cerr << "vuoto" << endl;
        top = nullptr;
    } else {
        top = new Node(stack.top->getBarattolo(), stack.top->getPtrNext());
        Node *aux = top;
        while (aux->getPtrNext() != nullptr) {
            aux->setPtrNext(new Node(aux->getBarattolo(), aux->getPtrNext()->getPtrNext()));
            aux = aux->getPtrNext();
        }
    }
}
Stack::~Stack()
{
    while (!isEmpty()) {
        pop();
    }
}
bool Stack::push(BarattoloDiMarmellata barattolo) {
    Node* pNew = new Node(barattolo, top);
    top = pNew;
}
bool Stack::pop() {
    Node* pDel = top;
    top = top->getPtrNext();
    delete pDel;
}
Node* Stack::getTop() {
    return top;
}
bool Stack::isEmpty() {
    return (!top);
}