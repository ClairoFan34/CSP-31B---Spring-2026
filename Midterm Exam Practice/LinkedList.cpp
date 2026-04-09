#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert at front
void insertFront(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Delete a node and free memory
void deleteNode(Node*& head, int value) {
    Node* current = head;
    Node* previous = nullptr;

    if (head != nullptr && head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    while (current != nullptr && current->data != value) {
        previous = current;
        current = current->next;
    }

    if (current != nullptr) {
        previous->next = current->next;
        delete current;
    }
}

// Traverse and print list
void printList(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Example usage
int main() {
    Node* head = nullptr;

    insertFront(head, 10);
    insertFront(head, 20);
    insertFront(head, 30);

    printList(head);

    deleteNode(head, 20);

    printList(head);

    return 0;
}