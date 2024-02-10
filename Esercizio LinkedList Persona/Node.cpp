#include "node.h"

Node() {
    ptrNext = nullptr;
}
Node(Persona data) {
    info = data;
    ptrNext = nullptr;
}
Node(Persona data, Node *next) {
    info = data;
    ptrNext = next;
}
~Node() {
    ptrNext = nullptr;
}
Persona getInfo() {
    return info;
}
Node* getPtrNext() {
    return ptrNext;
}
void setInfo(Persona data) {
    info = data;
}
void setPtrNext(Node *next) {
    ptrNext = next;
}
void setNode(Persona data, Node *next) {
    info = data;
    ptrNext = next;
}