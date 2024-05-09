#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

void deleteMiddleNode(Node* head, int position) {
    if (head == nullptr || position <= 0)
        return;

    Node* current = head;
    Node* prev = nullptr;
    int count = 0;

    while (current != nullptr && count != position) {
        prev = current;
        current = current->next;
        count++;
    }

    if (current == nullptr)
        return;

    prev->next = current->next;

    delete current;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Linked List sebelum menghapus simpul tengah: ";
    printList(head);

    int position = 3; 
    deleteMiddleNode(head, position);

    cout << "Linked List setelah menghapus simpul tengah pada posisinya: " << position << ": ";
    printList(head);

    return 0;
}
