#include "nodo.h"


Node::Node() {
    info = "";
    ptrNext = nullptr;
    priority = -1;
}

Node::Node(string info, Node* ptrNext, int priority) {
    this->info = info;
    this->ptrNext = ptrNext;
    this->priority = priority;
}

Node::Node(string info, int priority) {
    this->info = info;
    this->priority = priority;
    ptrNext = nullptr;
}

Node::~Node() {

}

string Node::getInfo() {
    return info;
}

Node* Node::getNextPtr() {
    return ptrNext;
}

int Node::getPriority() {
    return priority;
}

void Node::setInfo(string info) {
    this->info = info;
}

void Node::setPtrNext(Node* ptrNext) {
    this->ptrNext = ptrNext;
}

void Node::setPriority(int priority) {
    this->priority = priority;
}

