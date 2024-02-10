#include "linkedList.h"

/*costruttore di default*/
LinkedList::LinkedList(){
	head = nullptr;
}

LinkedList::LinkedList(LinkedList &lista){
    head = nullptr;
    Node* pAux = lista.head;
    while (pAux != nullptr){
        insertTail(pAux->getInfo());
        pAux = pAux->getPtrNext();
    }
}

LinkedList::~LinkedList() {
    Node* pAux = head;
    while (pAux != nullptr) {
        head = head->getPtrNext();
        delete pAux;
        pAux = head;
    }
}

bool LinkedList::isEmpty(){
	if(head == nullptr)		//if(!head)
		return true;	//lista VUOTA
	return false;
}

void LinkedList::displayRec(Node* head){
    if(head != nullptr){
        //PASSO
        cout << " " << head->getInfo();
        displayRec(head->getPtrNext());
    }
    //BASE: lista vuota
}

void LinkedList::displayHelper(){
    displayRec(head);
}

/*Node* LinkedList::getHead(){
    return head;
}*/

void LinkedList::display(){
	Node *pAux;			//puntatore ausiliario che scorre la lista
  	if (head == nullptr) {
	  	cout << endl << "LinkedList vuota.";
  	} else {
	  	pAux = head;
        while(pAux != nullptr){
			cout << " " << pAux->getInfo();
        	pAux = pAux->getPtrNext();
		}
    }
}

/*Inserimento in testa*/
bool LinkedList::insertHead(int data){
	Node *pNew = new Node(data, head);
	if(!pNew){
		cerr << "Allocazione fallita.";
		return false;
	}
	head = pNew;
	return true;
}

/*Inserimento in coda*/
bool LinkedList::insertTail(int data) {
	Node *pAux, *pNew = new Node(data);
	if(!pNew){
		cout << "Allocazione fallita.";
		return false;
	}
	if(isEmpty()) {
		head = pNew; 			//Se la lista � vuota
	} else {
		pAux = head;
		while(pAux->getPtrNext() != nullptr) 	//pAux si ferma sull'ultimo nodo
			pAux = pAux->getPtrNext();
		pAux->setPtrNext(pNew);
	}
	return true;
}

bool LinkedList::remove(int data) {
    bool flag = false; //false = nessun elemento cancellato
    if(!isEmpty()){
        Node* pCancel;
        if(data == head->getInfo()){ //l'elemento da cancellare � il primo
            pCancel = head;
            head = head->getPtrNext();
            delete pCancel;
            flag = true;
        } else {
            //l'elemento da cancellare � successivo al primo
            Node* pCurrent;
            pCancel = head->getPtrNext();
            pCurrent = head;
            //cerco l'elemento a partire dal secondo
            while(pCancel != nullptr && pCancel->getInfo() != data){
                pCurrent = pCurrent->getPtrNext();
                pCancel = pCancel->getPtrNext();
            }
            //se l'elemento � stato trovato...
            if(pCancel != nullptr){
                pCurrent->setPtrNext(pCancel->getPtrNext());
                delete pCancel;  //...lo cancello
                flag = true;
            }
        }
    }
    return flag;
}

Node* LinkedList::search(int data) {
    Node* pAux = head;
    while (!pAux && pAux->getInfo() != data) {
        pAux = pAux->getPtrNext();
    }
    return pAux;
}

int LinkedList::counter() {
    Node* pAux = head;
    int i = 0;
    while (!pAux) {
        pAux = pAux->getPtrNext();
        i++;
    }
    return i;
}

float LinkedList::avg() {
    Node* pAux = head;
    float sum = 0;
    int i = 0;
    while (!pAux) {
        pAux = pAux->getPtrNext();
        i++;
        sum += pAux->getInfo();
    }

    return sum / i;
}

int LinkedList::max() {
    Node* pAux = head;
    int max;
    if (!pAux) {
        max = pAux->getInfo();
        pAux = pAux->getPtrNext();
    }
    while(!pAux) {
        if (pAux->getInfo() > max) {
            max = pAux->getInfo();
        }
        pAux = pAux->getPtrNext();
    }

    return max;
}

int LinkedList::sumEven() {
    int sum = 0;
    Node* pAux = head;
    while (!pAux) {
        if (pAux->getInfo() % 2 == 0)
            sum += pAux->getInfo();
        pAux = pAux->getPtrNext();
    }

    return sum;
} 

int LinkedList::sumOdd() {
    int sum = 0;
    Node* pAux = head;
    while (!pAux) {
        if (pAux->getInfo() % 2 != 0)
            sum += pAux->getInfo();
        pAux = pAux->getPtrNext();
    }

    return sum;
} 

LinkedList LinkedList::sqInsertTail() {
    LinkedList temp;
    Node* pAux = head;
    while(!pAux) {
        temp.insertTail(pAux->getInfo() * pAux->getInfo());
    }

    return temp;
}

bool LinkedList::removeEvenHead() {
    Node* pAux = head;
    if (!head && head->getInfo() % 2 == 0) {
        head = head->getPtrNext();
        delete pAux;
        return true;
    }
    return false;
}

void LinkedList::multiplyNeg() {
    Node* pAux = head;
    while (!pAux) {
        if (pAux->getInfo() < 0)
            pAux->setInfo(pAux->getInfo() * -1);
        pAux = pAux->getPtrNext();
    }
}

void LinkedList::sort() {
    /*naive sort*/
    Node* pi = head, *pj;
    if(!isEmpty()) {
        while (!pi->getPtrNext()) {
            pj = pi->getPtrNext();
            while (!pj) {
                if (pi->getInfo() > pj->getInfo()) {
                    swap(pi, pj);
                    pj = pj->getPtrNext();
                }
                pj = pj->getPtrNext();
            }
            pi = pi->getPtrNext();
        }
    }
}

void LinkedList::swap(Node* p1, Node* p2) {
    int temp;
    temp = p1->getInfo();
    p1->setInfo(p2->getInfo());
    p2->setInfo(temp);
}

istream& operator>>(istream& in, LinkedList &lista) {
    int n;
    do {
        cout << "Inserire numero elementi: ";
        in >> n;
    } while (n < 0);
    for (int i = 0 ; i < n; i++) {
        int value;
        in >> value;
        if(lista.insertTail(value))
            cerr << "Fallita!";
    }

}