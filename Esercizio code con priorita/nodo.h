#ifndef NODO_H
#define NODO_H

#include <iostream>
using namespace std;

class Node {
private:
    string info;
    Node* ptrNext;
    int priority;
public:
    Node();
    Node(string info, Node* ptrNext, int priority);
    Node(string info, int priority);
    ~Node();
    string getInfo();
    Node* getNextPtr();
    int getPriority();
    void setInfo(string info);
    void setPtrNext(Node* nextPtr);
    void setPriority(int priority);
};

#endif
