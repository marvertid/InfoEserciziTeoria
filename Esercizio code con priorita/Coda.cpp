#include "coda.h"

Queue::Queue() {
    rear = front = nullptr;
}
Queue::Queue(string info, int priority) {
    front->setInfo(info);
    front->setPriority(priority);
    front->setPtrNext(rear);
    rear = front;
    rear->setPtrNext(front);
}

Queue::Queue(const Queue& queue) {
    Node* pAux = queue.front;
    while (pAux != queue.rear) {
        insert(pAux->getInfo(), pAux->getPriority());
        pAux = pAux->getNextPtr();
    }
}

Queue::~Queue() {
    Node *pDel = front;
    while (pDel) {
        front = front->getNextPtr();
        delete pDel;
    }

}
bool Queue::getFront() {
    return front;
}
bool Queue::getRear() {
    return rear;
}
bool Queue::insert(string info, int priority) {
    Node* pNew = new Node(info, priority);
    if (isEmpty()) {
        rear = front = pNew;
    } else {
        rear->setPtrNext(pNew);
        rear = pNew;
    }
    rear->setPtrNext(front);

    return true;

}

bool Queue::remove(string info, int priority) {
    if (isEmpty()) {
        cerr << "Coda vuota!";
        return false;
    } else {
        rear->setPtrNext(front->getNextPtr());
        delete front;
        front = rear->getNextPtr();
    }
}
bool Queue::isEmpty() {
    return (!front || !rear);
}
