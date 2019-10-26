#include "PlanetQueue.h"

PlanetQueue::PlanetQueue() 
{
    head = 0;
}

PlanetQueue::~PlanetQueue(){
    delete head;
}

bool PlanetQueue::isEmpty() {
    return head == 0;
}

PlanetIterator PlanetQueue::begin() {
    return PlanetIterator(*this, head);
}

PlanetIterator PlanetQueue::end(){
    return PlanetIterator(*this, head->prev);
}

void PlanetQueue::enqueue(Planet* p){
    Node* n = new Node();
    n->el = p;
    if (isEmpty()){
        n->next = n;
        n->prev = n;
    } else {
        n->next = head;
        n->prev = head->prev;
        head->prev->next = n;
        head->prev = n;
    }
    head = n;
}

Planet* PlanetQueue::dequeue(){
    if (isEmpty()){
        return 0;
    } else if (head->prev == head){
        Node* tmp = head;
        head = 0;
        return tmp->el;
    } else {
        Node* tmp = head->prev;
        head->prev = head->prev->prev;
        head->prev->next = head;
        return tmp->el;
    }
}

