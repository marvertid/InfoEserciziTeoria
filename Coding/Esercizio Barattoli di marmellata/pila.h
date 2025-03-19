#ifndef PILA_H
#define PILA_H

#include "nodo.h"

class Stack {
    private:
        Node* top;
    public:
        Stack();
        Stack(BarattoloDiMarmellata barattolo);
        Stack(Stack& stack);
        ~Stack();
        bool push(BarattoloDiMarmellata barattolo);
        bool pop();
        Node* getTop();
        bool isEmpty();

};

#endif
