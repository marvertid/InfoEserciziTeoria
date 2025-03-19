#include "node.h"

Node::Node() {
	nextPtr = nullptr;
	//info = new Product()
}
Node::Node(Product info) {
	nextPtr = nullptr;
	this->info = info;
}
Node::Node(Node* nextPtr, Product info) {
	this->nextPtr = nextPtr;
	this->info = info;
}
Node* Node::getPtrNext() {
	return nextPtr;
}
Product Node::getInfo() {
	return info;
}
void Node::setPtrNext(Node* nextPtr) {
	this->nextPtr = nextPtr;
}
void Node::setInfo(Product info) {
	this->info = info;
}