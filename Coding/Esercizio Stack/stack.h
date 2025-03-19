#ifndef STACK_H
#define STACK_H

#include "node.h"

class Stack {
    private:
        Node* top;
    public:
        Stack();
        Stack(int data);
        Stack(Stack& stack);
        ~Stack();
        bool push(int data);
        Node* pop();
        Node* getTop();
        bool isEmpty();
};

#endif //ESERCIZIO_STACK_STACK_H
