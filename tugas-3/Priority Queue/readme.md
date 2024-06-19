# <h1 align="center">Priority Queue</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori
Priority Queue adalah struktur data penting dalam ilmu komputer yang digunakan dalam berbagai aplikasi. Berbeda dengan antrian biasa yang mengikuti prinsip FIFO (First In, First Out), priority queue mengatur elemen berdasarkan prioritas yang diberikan. Elemen dengan prioritas lebih tinggi akan diakses atau diproses lebih dahulu. Setiap elemen dalam priority queue memiliki prioritas terkait, yang menentukan urutan pengeluaran elemen dari antrian. Elemen dengan prioritas tertinggi diakses lebih dulu, dan jika dua elemen memiliki prioritas yang sama, mereka biasanya diakses sesuai urutan kedatangan.

![image](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/bcf2d29a-2bd9-4973-a356-e4a68ad33de2)

Saat elemen ditambahkan ke antrian, elemen tersebut ditempatkan berdasarkan nilai prioritasnya. Misalnya, elemen dengan prioritas tinggi mungkin disisipkan di dekat bagian depan antrian, sementara elemen dengan prioritas rendah ditempatkan di bagian belakang. Ada berbagai cara untuk mengimplementasikan priority queue, seperti menggunakan array, linked list, heap, dan binary search tree. Namun, salah satu implementasi yang paling efisien adalah dengan menggunakan heap. Heap adalah pohon biner yang mematuhi properti tertentu sehingga mendukung operasi priority queue dengan efisiensi tinggi [1].

```
## Contoh Kode Priority Queue
#include <iostream>
#include <algorithm>

int H[50]; 
int heapSize = -1; 

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) { 
    return ((2 * i) + 1);
}

int rightChild(int i) {
    return ((2 * i) + 2);
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        int element;
        std::cin >> element;
        insert(element);
    }

    std::cout << "Priority Queue : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << " \n";

    std::cout << "Node with maximum priority : " << extractMax() << "\n";

    std::cout << "Priority queue after extracting maximum: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << " \n";

    changePriority(2, 49);
    std::cout << "Priority queue after priority change : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << " \n";

    remove(3);
    std::cout << "Priority queue after removing the element : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    return 0;
}
```

#### Output: 
![unguided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/652712f3-02c7-4e0e-b9e0-7c1afdb54ed8)

#### Interpretasi
Kode di atas adalah implementasi dari sebuah heap maksimum, yaitu struktur data yang mendukung operasi priority queue. Heap ini disimpan dalam array H dengan ukuran maksimal 50 elemen. Fungsi-fungsi yang disediakan mencakup operasi dasar heap seperti insert, extractMax, changePriority, dan remove.

Fungsi insert menambahkan elemen baru ke dalam heap dan memastikan properti heap maksimum tetap terjaga dengan memanggil shiftUp. Fungsi extractMax menghapus dan mengembalikan elemen terbesar dari heap, kemudian menyesuaikan heap dengan shiftDown. Fungsi changePriority mengubah prioritas suatu elemen di heap, kemudian menyesuaikan posisinya menggunakan shiftUp atau shiftDown tergantung dari perubahan prioritasnya. Fungsi remove menghapus elemen tertentu dari heap dengan cara mengubah nilainya menjadi lebih besar dari elemen maksimum saat ini, kemudian memanggil extractMax untuk mengeluarkannya dari heap.

Program utama meminta pengguna untuk memasukkan sejumlah elemen, kemudian menambahkan elemen-elemen tersebut ke dalam heap. Program ini juga mendemonstrasikan operasi extractMax, changePriority, dan remove, serta mencetak kondisi heap setelah setiap operasi untuk menunjukkan perubahan yang terjadi.

**Kesimpulan**
Priority queue adalah struktur data di mana elemen diakses berdasarkan prioritas, bukan urutan waktu. Elemen dengan prioritas lebih tinggi diakses lebih dulu. Implementasi dapat menggunakan array, linked list, atau heap. Heap, sering digunakan karena efisiensinya, adalah pohon biner yang memenuhi properti heap: setiap simpul memiliki nilai lebih besar (atau lebih kecil) dari simpul di bawahnya. Heap bisa berupa max heap (elemen terbesar di akar) atau min heap (elemen terkecil di akar). Operasi dasar pada heap meliputi penyisipan, ekstraksi nilai maksimum (atau minimum), perubahan prioritas, dan penghapusan elemen.

## Referensi
[1] Wijaya, Adi, et al (2020). Perbandingan Metode Implementasi Antrian Prioritas Menggunakan Array dan Linked List." Jurnal Sistem Informasi, 6(2), 31-36.

