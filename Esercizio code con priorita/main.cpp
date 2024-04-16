#include <iostream>

using namespace std;

int main() {
    
    List list;
    Queue qPriority0, qPriority1, qPriority2;

    while(List.isEmpty()) {
        Node* pAux = List.getHead();
        switch (pAux.getPriority()) {
            case 0:
                qPriority0.insert(pAux.getInfo(), pAux.getPriority());
                break;
            case 1:
                qPriority1.insert(pAux.getInfo(), pAux.getPriority());
                break;
            case 2:
                qPriority2.insert(pAux.getInfo(), pAux.getPriority());
                break;
        } 
        List.remove(pAux.getInfo(), pAux.getPriority());
    }

    return 0;
}
