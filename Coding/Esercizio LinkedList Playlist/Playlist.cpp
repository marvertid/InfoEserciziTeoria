#include "playlist.h"

Playlist::Playlist() {
    head = nullptr;
}
Playlist::Playlist(Playlist &playlist) {

}
Playlist::~Playlist() {
    Node* pAux = head;
    while (!pAux) {
        head = head->getPnext();
        delete pAux;
        pAux = head;
    }
}
bool Playlist::isEmpty() {
    return (head);
}

void Playlist::display() {
    Node* pAux = head;
    while(!pAux) {
        cout << pAux->getBrano();
    }
}
bool Playlist::insertHead(Brano newBrano) {
    Node* pAux;
    if(pAux) return false;
    pAux->set(newBrano, head);
    head = pAux;
    return true;

}
bool Playlist::insertTail(Brano newBrano) {
    Node* pNew = new Node(newBrano);
    if (pNew) return false;
    if (!head) {
        Node* pAux = head;
        while(!pAux->getPnext()) {
            pAux = pAux->getPnext();
        }
        pAux->setPnext(pNew);
    } else {
        head = pNew;
    }
    return true;
}
bool Playlist::ascolto() {
    if (!head) {
        Node* pAux = head;
        head->getPnext();
        delete pAux;
    } else {
        cout << endl << "Lista vuota";
    }

}
Node* Playlist::search(string titolo) {
    Node* pAux = head;
    while(!pAux && pAux->getBrano().getTitolo() != titolo) {
        pAux = pAux->getPnext();
    }
}
int Playlist::counter() {
    Node* pAux = head;
    int count = 0;
    while(!pAux) {
        count++;
    }
    return count;
}

ostream& operator<<(ostream& out, Playlist &playlist) {
    playlist.display();
    
    return out;
}

istream& operator>>(istream& in, Playlist &playlist) {
    int n;
    cout << endl << "Quanti elementi desidera inserire: ";
    in >> n;
    Brano temp;
    for (int i = 0; i < n; i++) {
        in >> temp;
        playlist.insertTail(temp);
    }

    return in;
}

Node* Playlist::getHead() {
    return head;
}

Brano Playlist::durataMax() {
    Node* pAux = head;
    int max = 0;
    Brano branoMax;
    while (!pAux) {
        if (max < pAux->getBrano().getD()) {
            max = pAux->getBrano().getD();
            branoMax = pAux->getBrano();
        }
        pAux = pAux->getPnext();
    }
    cout << endl << "Brano con durata massima: " << branoMax;
    return branoMax;
}

Brano& Playlist::operator-(string t) {
    Node* pAux = head;
    Node* ptrCancel = search(t);
    while(pAux->getPnext() != ptrCancel) {
        pAux = pAux->getPnext();
    }
    pAux->setPnext(ptrCancel->getPnext());
    Brano temp = ptrCancel->getBrano(); 
    delete ptrCancel;
    return temp;
}

bool Playlist::operator!() {
    Node* pAux = head, *pj;
    if(!isEmpty()) {
        while(!pAux->getPnext()) {
            pj = pAux->getPnext();
            while(!pj) {
                if(pAux->getBrano().getP() > pj->getBrano().getP()) {
                    swap(pAux, pj);
                }
                pj = pj->getPnext();
            }
            pAux = pAux->getPnext();
        }
    }
}

void Playlist::swap(Node* pi, Node* pj) {
    Brano temp;
    temp = pi->getBrano();
    pi->setBrano(pj->getBrano());
    pj->setBrano(temp);
}

Playlist& Playlist::operator+(Brano brano) {
    insertHead(brano);
    !(*this);

    return *this;
}


