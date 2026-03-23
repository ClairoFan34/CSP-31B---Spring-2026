#include <iostream>
#include "UnorderedLinkedList.h" // your header file
using namespace std;

int main() {
    unorderedLinkedList list;

    list.insertLast(5);
    list.insertLast(3);
    list.insertLast(8);
    list.insertLast(3);
    list.insertLast(10);
    list.insertLast(3);
    list.insertLast(6);
    list.insertLast(7);

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

    cout << "3rd element is: " << list.getKthElement(3) << endl;

    list.deleteKthElement(2);
    cout << "After deleteKthElement(2): ";
    list.print();
    cout << endl;

    list.rotate();
    cout << "After rotate(): ";
    list.print();
    cout << endl;

    cout << "List in reverse: ";
    list.reversePrint();

    return 0;

    

    return 0;
}