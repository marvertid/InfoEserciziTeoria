#ifndef NODE_H
#define NODE_H

class Node {
    private:
        int data;
        Node* ptrNext;
    public:
        Node();
        Node(int data);
        Node(int data, Node* ptrNext);
        int getData();
        Node* getPtrNext();
        void setData(int data);
        void setPtrNext(Node* ptrNext);
};

#endif //ESERCIZIO_STACK_NODE_H
