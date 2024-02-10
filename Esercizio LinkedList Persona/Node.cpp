#include "node.h"

Node::Node() {
    ptrNext = nullptr;
}

Node::Node(Persona data) {
    info = data;
    ptrNext = nullptr;
}

Node::Node(Persona data, Node *next) {
    info = data;
    ptrNext = next;
}

Node::~Node() {
    
}

Persona Node::getInfo() {
    return info;
}

Node* Node::getPtrNext() {
    return ptrNext;
}

void Node::setInfo(Persona data) {
    info = data;
}

void Node::setPtrNext(Node *next) {
    ptrNext = next;
}

void Node::setNode(Persona data, Node *next) {
    info = data;
    ptrNext = next;
}