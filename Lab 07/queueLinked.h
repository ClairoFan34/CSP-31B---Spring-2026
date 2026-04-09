#include "unorderedLinkedList.h"
#include <iostream>
#include <queue>

using namespace std;

template <typename type>
class linkedQueueType : public unorderedLinkedList<type> {
    private:

    public:
        void addQueue (type n);
        bool isEmptyQueue();
        type front();
        void deleteQueue();
    
};

template <typename type>
void linkedQueueType<type>::addQueue (type n ){
    this->insertLast(n);
}

template <typename type>
bool linkedQueueType<type>::isEmptyQueue() {
    return linkedListType<type>::isEmptyList();
}

template <typename type>
type linkedQueueType<type>::front() {
    return linkedListType<type>::front();
}

template <typename type>
void linkedQueueType<type>::deleteQueue() {
    if (this->isEmptyQueue() == true) {
        cout << "Queue is empty" << endl;
        return;
    }
    
    nodeType<type>* temp = this->first;
    this->first = this->first->link;
    this->count--;

    if (this->first == nullptr) {
        this->last = nullptr;
    }

    delete temp;
}