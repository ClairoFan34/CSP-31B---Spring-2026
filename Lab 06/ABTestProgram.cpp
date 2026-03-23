#include <iostream>
#include "UnorderedLinkedList.h" // your header file
using namespace std;

int main2() {
    unorderedLinkedList list;

    list.insertLast(5);
    list.insertLast(3);
    list.insertLast(8);
    list.insertLast(3);
    list.insertLast(10);
    list.insertLast(3);

    cout << "Original list: ";
    list.print();
    cout << endl;

    list.deleteSmallest();
    cout << "After deleteSmallest(): ";
    list.print();
    cout << endl;

    list.deleteAll();
    cout << "After deleteAll(): ";
    list.print();
    cout << endl;

    return 0;
}