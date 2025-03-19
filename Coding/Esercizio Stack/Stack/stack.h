#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "node.h"

class Stack {
	private:
		Node* top;
		void insertTail(int dato);
	public:
		Stack();
		Stack(int dato);
		Stack(Stack& st);
		~Stack();
		bool push(int dato);
		bool pop();
		Node* getTop();
		bool isEmpty();

};

#endif
