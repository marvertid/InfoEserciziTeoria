#ifndef CODA_H
#define CODA_H

#include "nodo.h"

class Queue {
    private:
        Node* front;
        Node* rear;
    public:
        Queue();
        Queue(string info, int priority);
        Queue(const Queue& queue);
        ~Queue();
        bool getFront();
        bool getRear();
        bool insert(string info, int priority);
        bool remove(string info, int priority);
        bool isEmpty();
};

#endif
