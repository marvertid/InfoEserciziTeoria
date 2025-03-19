#ifndef LIST_H
#define LIST_H

#include "node.h"

class List {
	private:
		Node* head;
	public:
		List();
		List(Product info);
		void insert(Product info);
		Product extract();
		bool isEmpty();
};

#endif
