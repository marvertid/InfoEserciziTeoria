#include "nodo.h"

Node::Node() {
    pnext = nullptr;
    b.set("Undefined", 0 , 0);
}

Node::Node(Brano b, Node* pnode) {
    pnext = pnode;
    this->b.set(b.getTitolo(), b.getD(), b.getP());
}

Node::Node(Brano b) {
    this->b.set(b.getTitolo(), b.getD(), b.getP());
    pnext = nullptr;
}

Brano Node::getBrano() {
    return b;
}

Node* Node::getPnext() {
    return pnext;
}

void Node::setBrano(Brano b) {
    this->b.set(b.getTitolo(), b.getD(), b.getP());
}

void Node::setPnext(Node* pnode) {
    pnext = pnode;
}

void Node::set(Brano b, Node* pnode) {
    pnext = pnode;
    this->b.set(b.getTitolo(), b.getD(), b.getP());
}