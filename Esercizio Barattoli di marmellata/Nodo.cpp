#include "nodo.h"

Node::Node() {
    ptrNext = nullptr;
    BarattoloDiMarmellata temp;
    barattolo = temp;
};

Node::Node(BarattoloDiMarmellata barattolo) {
    ptrNext = nullptr;

}
Node::Node(BarattoloDiMarmellata barattolo, Node* ptrNext) {
    this->ptrNext = ptrNext;
    this->barattolo = barattolo;
}

BarattoloDiMarmellata Node::getBarattolo() {
    return barattolo;
}
void Node::setBarattolo(BarattoloDiMarmellata barattolo) {
    this->barattolo = barattolo;
}
Node* Node::getPtrNext() {
    return ptrNext;
}
void Node::setPtrNext(Node* ptrNext)
{
    this->ptrNext = ptrNext;
}