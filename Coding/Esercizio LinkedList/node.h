#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class Node{
	private:
		int info;
		Node *ptrNext;
	public:
		Node();
		Node(int data);
		Node(int data, Node *next);
		~Node();
		int getInfo();
		Node* getPtrNext();
		void setInfo(int data);
		void setPtrNext(Node *next);
		void setNode(int data, Node *next);
};
#endif
