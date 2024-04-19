#ifndef NODO_H
#define NODO_H

#include "barattoloDiMarmellata.h"

class Node {
    private:
        BarattoloDiMarmellata barattolo;
        Node* ptrNext;
    public:
        Node();
        Node(BarattoloDiMarmellata barattolo);
        Node(BarattoloDiMarmellata barattolo, Node* ptrNext);
        BarattoloDiMarmellata getBarattolo();
        void setBarattolo(BarattoloDiMarmellata barattolo);
        Node* getPtrNext();
        void setPtrNext(Node* ptrNext);
};

#endif //NODO_H
