#include "queue.h"

Queue::Queue() {
    front = rear = nullptr;
}
Queue::Queue(BarattoloDiMarmellata barattolo) {
    front = rear = nullptr;

}
Queue::~Queue() {
    Node* pDel;
    while (front) {
        pDel = front;
        front = front->getPtrNext();
        delete pDel;
    }
}
void Queue::insert(BarattoloDiMarmellata barattolo) {
    Node* pNew = new Node(barattolo, front);

}
void Queue::remove() {
    front = front->getPtrNext();
    delete rear->getPtrNext();
    rear->setPtrNext(front);
}

Node* Queue::getFront() {
    return front;
}
Node* Queue::getRear() {
    return rear;
}
