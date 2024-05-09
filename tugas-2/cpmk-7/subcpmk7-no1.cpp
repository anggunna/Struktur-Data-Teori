#include <iostream>
using namespace std;

const int MAX_SIZE = 5; // Ukuran maksimum antrian
int front = -1; // Indeks depan antrian
int rear = -1; // Indeks belakang antrian
int queue[MAX_SIZE]; // Array untuk menyimpan elemen antrian

// Fungsi untuk mengecek apakah antrian kosong
bool isEmpty() {
    return front == -1 && rear == -1;
}

// Fungsi untuk mengecek apakah antrian penuh
bool isFull() {
    return (rear + 1) % MAX_SIZE == front;
}

// Fungsi untuk menambahkan elemen ke dalam antrian (enqueue)
void enqueue(int data) {
    if (isFull()) {
        cout << "Antrian penuh. Tidak bisa menambahkan elemen." << endl;
        return;
    } else if (isEmpty()) {
        front = rear = 0; // Atur front dan rear ke 0 jika antrian kosong
    } else {
        rear = (rear + 1) % MAX_SIZE; // Geser rear ke depan secara sirkular
    }
    queue[rear] = data; // Tambahkan elemen ke dalam antrian
}

// Fungsi untuk menghapus elemen dari antrian (dequeue)
void dequeue() {
    if (isEmpty()) {
        cout << "Antrian kosong. Tidak bisa menghapus elemen." << endl;
        return;
    } else if (front == rear) {
        front = rear = -1; // Atur front dan rear kembali ke nilai awal jika hanya ada satu elemen dalam antrian
    } else {
        front = (front + 1) % MAX_SIZE; // Geser front ke depan secara sirkular
    }
}

// Fungsi untuk melihat elemen terdepan dari antrian (front)
int peek() {
    if (isEmpty()) {
        cout << "Antrian kosong. Tidak bisa melihat elemen terdepan." << endl;
        return -1;
    }
    return queue[front]; // Kembalikan elemen terdepan dari antrian
}

// Fungsi untuk mencetak seluruh elemen dalam antrian
void printQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong." << endl;
        return;
    }
    cout << "Elemen dalam antrian: ";
    int i = front;
    while (i != rear) {
        cout << queue[i] << " ";
        i = (i + 1) % MAX_SIZE; // Geser indeks i secara sirkular
    }
    cout << queue[rear] << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printQueue();
    
    dequeue();
    printQueue();
    
    cout << "Elemen terdepan: " << peek() << endl;

    return 0;
}
