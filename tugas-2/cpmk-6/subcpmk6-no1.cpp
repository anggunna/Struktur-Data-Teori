#include <iostream>
#include <string>
using namespace std;

const int maksimalQueue = 5; 
int top = 0; 
string stackTeller[5]; 
bool isFull() {
    return top == maksimalQueue;
}

bool isEmpty() {
    return top == 0;
}

void push(string data) { 
    if (isFull()) {
        cout << "Stack penuh" << endl;
    } else {
        stackTeller[top++] = data; 
    }
}

void pop() { 
    if (isEmpty()) {
        cout << "Stack kosong" << endl;
    } else {
        top--; 
    }
}

int countStack() { 
    return top;
}

void clearStack() { 
    top = 0; 
}

void viewStack() {
    cout << "Data dalam stack teller:" << endl;
    for (int i = 0; i < top; i++) {
        cout << i + 1 << ". " << stackTeller[i] << endl;
    }
}

int main() {
    push("Maya");
    push("Anggun");
    viewStack();
    cout << "Jumlah elemen dalam stack = " << countStack() << endl;
    pop();
    viewStack();
    cout << "Jumlah elemen dalam stack = " << countStack() << endl;
    clearStack();
    viewStack();
    cout << "Jumlah elemen dalam stack = " << countStack() << endl;
    return 0;
}
