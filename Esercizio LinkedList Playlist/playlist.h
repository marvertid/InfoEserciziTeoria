#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "nodo.h"
#include "brano.h"

class Playlist {
    private:
        Node* head;
    public:  
        Playlist();
        Playlist(Playlist &playlist);
        ~Playlist();
        bool isEmpty();
        void display();
        bool insertHead(Brano newBrano);
        bool insertTail(Brano newBrano);
        bool ascolto();
        Node* search(string titolo);
        int counter();
        Node* getHead();
        Brano durataMax();
        Brano& operator-(string t);
        bool operator!();
        void swap(Node* pi, Node* pj);
        Playlist& operator+(Brano brano);
    friend ostream& operator<<(ostream& out, Playlist &playlist);
    friend istream& operator>>(istream& in, Playlist &playlist);
};

#endif