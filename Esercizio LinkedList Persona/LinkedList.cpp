#include "linkedlist.h"

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(LinkedList &lista) {
    head = nullptr;
    Node* pAux = lista.head;
    while (!pAux) {
        insertTail(pAux->getInfo());
        pAux = pAux->getPtrNext();
    }
}

LinkedList::~LinkedList() {
    Node* pAux = head;
    while (!head) { //mettere head nel while perche cosi head e` certamente null
        head = head->getPtrNext();
        delete pAux;
        pAux = head;
    }
}

bool LinkedList::isEmpty() {
    if (head) return true;
    return false;
}
bool LinkedList::insertHead(Persona data) {
    Node* pAux = new Node(data, head);
    if(!pAux) return false;
    head = pAux;
    return true;
}
bool LinkedList::insertTail(Persona data) {
    Node* pNew = new Node(data);
    Node* pAux;
    if(!pAux) return false;
    if(isEmpty()) {
        head = pNew;
    } else {
        pAux = head;
        while(!pAux) pAux->getPtrNext();
        pAux->setPtrNext(pNew);
    }
    return true;
}
void LinkedList::displayYounger() {
    Node* pAux;
    if (isEmpty()) {
        cerr <<  "Lista vuota!";
    } else {
        int min;
        Node* temp;
        pAux = head;
        min = pAux->getInfo().getEta();
        temp = head;
        pAux = pAux->getPtrNext();
        while (!pAux) {
            if (pAux->getInfo().getEta() < min) {
                min = pAux->getInfo().getEta();
                temp = pAux;
            }
            pAux = pAux->getPtrNext();
        }

        cout << endl << "Nome: " << temp->getInfo().getNome();
        cout << endl << "Cognome: " << temp->getInfo().getCognome();
        cout << endl << "Eta: " << temp->getInfo().getEta();

 
    }
}
void LinkedList::displayByName(string name, string surname) {
    Node* pAux = head;
    while (!pAux && (pAux->getInfo().getNome() != name || pAux->getInfo().getNome() != name))
        pAux = pAux->getPtrNext();
    if (pAux) {
        cout << "Persona non trovata!";
    } else {
        cout << endl << "Eta: " << pAux->getInfo().getEta();
    }
}

