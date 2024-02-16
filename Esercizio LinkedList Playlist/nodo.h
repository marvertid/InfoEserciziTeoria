#ifndef NODO_H
#define NODO_H

#include "brano.h"

class Node {
    private:
        Brano b;
        Node* pnext;
    public:
        Node();
        Node(Brano b, Node* pnode);
        Node(Brano b);
        Brano getBrano();
        Node* getPnext();
        void setBrano(Brano b);
        void setPnext(Node* pnode);
        void set(Brano b, Node* pnode);

};

#endif