#ifndef NODE_H
#define NODE_H

#include "product.h"
#include <iostream>
using namespace std;

class Node {
	private:
		Node* nextPtr;
		Product info;
	public:
		Node();
		Node(Product info);
		Node(Node* nextPtr, Product info);
		Node* getPtrNext();
		Product getInfo();
		void setPtrNext(Node* nextPtr);
		void setInfo(Product info);
};

#endif
