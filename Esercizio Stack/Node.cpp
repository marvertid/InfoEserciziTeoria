#include "node.h"

Node::Node() {
    data = 0;
    ptrNext = nullptr;
}
Node::Node(int data) {
    this->data = data;
    ptrNext = nullptr;
}
Node::Node(int data, Node* ptrNext) {
    this->data = data;
    this->ptrNext = ptrNext;
}
int Node::getData() {
    return data;
}
Node* Node::getPtrNext() {
    return ptrNext;
}
void Node::setData(int data) {
    this->data = data;
}
void Node::setPtrNext(Node* ptrNext) {
    this->ptrNext = ptrNext;
}
