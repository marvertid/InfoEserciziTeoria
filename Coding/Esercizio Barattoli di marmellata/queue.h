#ifndef QUEUE_H
#define QUEUE_H

#include "nodo.h"
#include "barattoloDiMarmellata.h"

class Queue {
    private:
        Node* front, *rear;
    public:
        Queue();
        Queue(BarattoloDiMarmellata barattolo);
        ~Queue();
        void insert(BarattoloDiMarmellata barattolo);
        void remove();
        Node* getFront();
        Node* getRear();
};

#endif //QUEUE_H
