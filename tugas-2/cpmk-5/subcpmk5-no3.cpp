#include <iostream>
#include <stack>
using namespace std;

struct Node {
    char data;
    Node* next;
    Node(char value) : data(value), next(nullptr) {}
};

bool isPalindrome(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return true;

    stack<char> charStack;
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        charStack.push(slow->data);
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast != nullptr)
        slow = slow->next;

    while (slow != nullptr) {
        char topChar = charStack.top();
        charStack.pop();

        if (topChar != slow->data)
            return false;

        slow = slow->next;
    }

    return true;
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
    Node* head = new Node('r');
    head->next = new Node('a');
    head->next->next = new Node('d');
    head->next->next->next = new Node('a');
    head->next->next->next->next = new Node('r');

    cout << "Linked list: ";
    printList(head);

    if (isPalindrome(head))
        cout << "Linked List ini adalah sebuah palindrome." << endl;
    else
        cout << "Linked List ini bukanlah sebuah palindrome." << endl;

    return 0;
}
