#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

class List {
    private:
        Node* head;
    public:
        List();
        List(string info, int priority);
        List(const List& list);
        ~List();
        Node* getHead();
        void insertHead(string info, int priority);
        void insertTail(string info, int priority);
        bool removeElement(string info, int priority);
        bool isEmpty();
};

#endif
