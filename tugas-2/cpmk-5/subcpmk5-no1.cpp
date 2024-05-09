#include <iostream>
#include <unordered_set>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

void removeDuplicates(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return;

    unordered_set<int> seen;
    Node* curr = head;
    Node* prev = nullptr;

    while (curr != nullptr) {
        if (seen.find(curr->data) != seen.end()) {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        } else {
            seen.insert(curr->data);
            prev = curr;
            curr = curr->next;
        }
    }
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
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(10);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(20);

    cout << "Linked List sebelum menghapus duplikat: ";
    printList(head);

    removeDuplicates(head);

    cout << "Linked List setelah menghapus duplikat: ";
    printList(head);

    return 0;
}
