#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void tambahNodeTengah(Node* &head, int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = nullptr;

    Node* fastPtr = head;
    Node* slowPtr = head;
    Node* prev = nullptr;
    while (fastPtr != nullptr && fastPtr->next != nullptr) {
        fastPtr = fastPtr->next->next;
        prev = slowPtr;
        slowPtr = slowPtr->next;
    }

    newNode->next = slowPtr;
    if (prev != nullptr) {
        prev->next = newNode;
    } else {
        head = newNode;
    }
}

void cetakLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;
    Node* fourth = nullptr;

    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = nullptr;

    cout << "Linked list sebelum penambahan: ";
    cetakLinkedList(head);

    tambahNodeTengah(head, 5);

    cout << "Linked list setelah penambahan: ";
    cetakLinkedList(head);

    return 0;
}
