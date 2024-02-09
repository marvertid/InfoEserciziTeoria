#include "node.h"
Node::Node(){
	info = 0;
	ptrNext = nullptr;
}

Node::Node(int data){
	info = data;
	ptrNext = nullptr;
}

Node::Node(int data, Node *next){
	info = data;
	ptrNext = next;
}

Node::~Node() {
	ptrNext = nullptr;
}

int Node::getInfo(){
	return info;
}

Node* Node::getPtrNext(){
	return ptrNext;
}

void Node::setInfo(int data){
	info = data;
}

void Node::setPtrNext(Node *next){
	ptrNext = next;
}

void Node::setNode(int data, Node *next){
	info = data;
	ptrNext = next;
}
