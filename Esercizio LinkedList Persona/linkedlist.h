#ifndef LINKEDLIST_H
#define LINKEDLIST_HA

#include <iostream>
#include "node.h"

class LinkedList {
    private:
        Node* head;
    public:
        LinkedList();
        LinkedList(LinkedList &lista);
        ~LinkedList();
        bool isEmpty();
        bool insertHead(Persona data);
        bool insertTail(Persona data);
        void displayYounger();
        void displayByName(string name, string surname);
}

#endif