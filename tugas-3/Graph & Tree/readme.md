# <h1 align="center">Graph & Tree</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori

### Graph
Graf adalah kumpulan titik (simpul) dalam bidang dua dimensi yang terhubung oleh serangkaian garis (sisi). Graf digunakan untuk merepresentasikan objek-objek diskrit serta hubungan antara objek-objek tersebut. Representasi visual graf menyatakan objek sebagai titik (Vertex), sedangkan hubungan antar objek dinyatakan dengan garis (Edge) [1].

![Introduction-to-Graphs](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/7afd8e9a-02d9-4c58-9397-f6cadd3df5d9)

Graf adalah cabang ilmu yang memiliki banyak aplikasi. Banyak struktur yang dapat direpresentasikan dengan graf, dan banyak masalah yang dapat diselesaikan dengan bantuan graf. Graf sering digunakan untuk merepresentasikan suatu jaringan, seperti jaringan jalan raya di mana kota-kota direpresentasikan sebagai simpul (vertex/node) dan jalan-jalan yang menghubungkan kota-kota tersebut sebagai sisi (edge) yang memiliki bobot (weight) berupa panjang jalan tersebut [2].

#### Jenis-jenis Graph
1. Graf Tak Berarah (Undirected Graph): Urutan simpul dalam sebuah sisi tidak diperhitungkan. Misalnya, sisi e1 dapat disebut sebagai sisi AB atau BA.
2. Graf Berarah (Directed Graph): Urutan simpul memiliki arti penting. Sebagai contoh, sisi AB disebut e1 sedangkan sisi BA disebut e8.
3. Graf Berbobot (Weighted Graph): Jika setiap sisi memiliki nilai yang menunjukkan hubungan antara dua simpul, maka sisi tersebut memiliki bobot. Bobot sebuah sisi bisa menyatakan panjang sebuah jalan antara dua titik, jumlah rata-rata kendaraan per hari yang melewati jalan tersebut, atau berbagai hal lainnya [3].

#### Representasi Graf
1. **Matriks Adjacency** 
adalah representasi graf dalam bentuk matriks n x n yang menggambarkan hubungan antara simpul-simpul dalam sebuah graf. Baris dan kolom matriks mewakili simpul-simpul, sedangkan nilai pada matriks menunjukkan apakah ada sisi yang menghubungkan dua simpul. Dalam matriks n x n, entri non-diagonal aij menunjukkan adanya sisi antara simpul i dan simpul j, sedangkan entri diagonal aii menunjukkan adanya sisi kalang (loop) pada simpul i [4].

Kelebihan dari matriks adjacency adalah elemen matriks dapat diakses langsung melalui indeks, sehingga hubungan antara dua simpul dapat ditentukan dengan cepat. Namun, kelemahan dari representasi ini adalah tidak efisien dalam penggunaan memori jika graf memiliki jumlah sisi yang relatif sedikit, karena banyak elemen nol yang tersimpan dalam matriks. Hal ini mengakibatkan pemborosan ruang memori.
2. **Adjacency list**
adalah representasi graf di mana semua sisi atau busur disajikan dalam bentuk daftar. Simpul-simpul yang dihubungkan oleh sisi atau busur dinyatakan sebagai simpul yang saling terkait. Dalam implementasinya, tabel hash sering digunakan untuk menghubungkan sebuah simpul dengan daftar simpul-simpul yang terhubung dengannya.

Kekurangan dari teknik representasi ini adalah tidak adanya tempat untuk menyimpan nilai yang melekat pada sisi, seperti jarak antara simpul atau beban pada simpul [5].

### Tree
Pohon adalah graf yang terhubung dan tidak mengandung siklus. Dalam kata lain, pohon memiliki struktur hierarki dengan hubungan antar simpul yang mirip dengan cabang-cabang pada pohon nyata. Pohon dengan n simpul selalu memiliki n−1 sisi. Simpul dalam pohon juga dikenal sebagai node, dan sisi disebut edge. Setiap simpul kecuali akar (root) memiliki tepat satu tetangga yang merupakan induknya (parent). Simpul yang tidak memiliki anak disebut daun (leaf).Pohon adalah graf yang terhubung dan tidak mengandung siklus. Dalam kata lain, pohon memiliki struktur hierarki dengan hubungan antar simpul yang mirip dengan cabang-cabang pada pohon nyata. Pohon dengan n simpul selalu memiliki n−1 sisi. Simpul dalam pohon juga dikenal sebagai node, dan sisi disebut edge. Setiap simpul kecuali akar (root) memiliki tepat satu tetangga yang merupakan induknya (parent). Simpul yang tidak memiliki anak disebut daun (leaf) [6].

![Introduction-to-tree](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/48a59db5-8b91-4c95-b0c6-498645eefba4)

#### Jenis-jenis Tree
**1. Pohon Biner (Binary Tree)** 
Pohon biner adalah jenis pohon di mana setiap simpul (node) memiliki paling banyak dua anak, yang disebut anak kiri (left child) dan anak kanan (right child). Struktur ini menciptakan hierarki yang sederhana namun sangat berguna untuk berbagai aplikasi dalam ilmu komputer. Pohon biner digunakan secara luas dalam berbagai struktur data dan algoritma, seperti binary search tree (BST) dan heap. Keberadaan dua anak maksimal ini memungkinkan pengaturan dan manipulasi data dengan cara yang efisien, karena setiap keputusan biner (ya/tidak, kiri/kanan) mempersempit ruang pencarian secara eksponensial.

**2. Pohon Biner Pencarian (Binary Search Tree - BST)**
Pohon Biner Pencarian, atau Binary Search Tree (BST), adalah pohon biner khusus di mana setiap simpul mengikuti aturan tertentu: nilai anak kiri selalu lebih kecil daripada nilai simpul induk, dan nilai anak kanan selalu lebih besar. Properti ini membuat BST sangat efisien untuk operasi pencarian, penyisipan, dan penghapusan. Saat mencari nilai tertentu, kita bisa membandingkan nilai tersebut dengan simpul saat ini, kemudian memutuskan untuk bergerak ke anak kiri jika nilai yang dicari lebih kecil atau ke anak kanan jika lebih besar. Proses ini berulang hingga nilai ditemukan atau mencapai simpul daun. Efisiensi BST bergantung pada keseimbangan pohon; dalam kasus terbaik, operasi dapat dilakukan dalam waktu O(logn).

**3. Pohon AVL (AVL Tree)**
Pohon AVL adalah jenis pohon biner pencarian yang memastikan pohon tetap seimbang secara tinggi. Untuk setiap simpul dalam pohon AVL, perbedaan tinggi antara anak kiri dan anak kanan tidak boleh lebih dari satu. Ini berarti setelah setiap operasi penyisipan atau penghapusan, pohon mungkin perlu dirotasi untuk memulihkan keseimbangan. Rotasi ini bisa berupa rotasi tunggal atau rotasi ganda, tergantung pada struktur lokal pohon. Keseimbangan ini memastikan bahwa waktu pencarian, penyisipan, dan penghapusan tetap optimal dalam O(logn), membuat pohon AVL sangat efisien untuk operasi yang memerlukan kinerja konsisten.

**4. Pohon Merah-Hitam (Red-Black Tree)**
Pohon Merah-Hitam adalah jenis pohon biner pencarian yang menggunakan pewarnaan simpul dengan dua warna (merah dan hitam) untuk menjaga keseimbangan. Setiap simpul diwarnai merah atau hitam, dan aturan pewarnaan tertentu diterapkan untuk memastikan bahwa pohon tetap hampir seimbang. Aturan-aturan ini termasuk: akar selalu hitam, semua daun (simpul null) berwarna hitam, simpul merah tidak boleh memiliki anak merah, dan setiap jalur dari akar ke daun memiliki jumlah simpul hitam yang sama. Pohon Merah-Hitam digunakan dalam banyak implementasi struktur data seperti map dan set dalam bahasa pemrograman karena mereka memastikan operasi pencarian, penyisipan, dan penghapusan dapat dilakukan dalam waktu O(logn). Struktur ini memberikan keseimbangan antara waktu penyesuaian dan kompleksitas implementasi, menjadikannya pilihan populer.


## Contoh Kode Graph
```C++
#include <iostream>
#include <iomanip>

using namespace std;

string simpul[7] = {
    "Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"
};

int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 0, 15, 0},
    {0, 6, 0, 0, 5, 0, 0},
    {0, 5, 0, 0, 2, 4, 0},
    {23, 0, 0, 10, 0, 0, 8},
    {0, 0, 0, 0, 7, 0, 3},
    {0, 0, 0, 0, 9, 4, 0},
};

void tampilGraph() {
    for (int baris = 0; baris < 7; baris++) {
        cout << " " << setiosflags(ios::left) << setw(15) << simpul[baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++) {
            if (busur[baris] [kolom] != 0) {
                cout << " " << simpul[kolom] << " (" << busur[baris] [kolom] << ")";
            }
        }
        cout << endl;
    }
}

int main() {
    tampilGraph();
    return 0;
}
```
#### Output: 
![guided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/79cbf787-2ee1-4c2f-8300-e1074791b429)

#### Interpretasi
Kode di atas digunakan untuk mencetak program graf. Program ini mendefinisikan sebuah array string bernama simpul yang berisi nama tujuh kota: Ciamis, Bandung, Bekasi, Tasikmalaya, Cianjur, Purwokerto, dan Yogyakarta. Kota-kota ini mewakili simpul dari graf tersebut. Matriks ketetanggaan graf direpresentasikan oleh array 2D busur, di mana setiap elemen busur[i][j] menunjukkan bobot dari busur yang menghubungkan simpul i ke simpul j. Jika busur[i][j] bernilai nol, itu berarti tidak ada busur langsung dari simpul i ke simpul j.

Fungsi tampilGraph melakukan iterasi melalui setiap simpul dan mencetak busur keluar beserta bobotnya. Untuk setiap simpul, fungsi ini memeriksa setiap simpul lainnya untuk melihat apakah terdapat busur (yaitu, bobotnya tidak nol). Jika busur ada, fungsi ini mencetak simpul tujuan dan bobot busur tersebut dalam format tertentu. Dalam fungsi main, program hanya memanggil fungsi tampilGraph untuk menampilkan graf. Outputnya menunjukkan setiap kota diikuti dengan koneksi langsungnya ke kota lain, termasuk bobot dari koneksi-koneksi tersebut.

## Contoh Kode Tree
```C++
#include <iostream>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    // constructor
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder(TNode *node) {
    if (node != NULL) {
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void inOrder(TNode *node) {
    if (node != NULL) {
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
}

void postOrder(TNode *node) {
    if (node != NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

int main() {
    TNode *zero = new TNode(0);
    // 0
    // /\
    // NULL

    TNode *one = new TNode(1);
    TNode *five = new TNode(5);
    TNode *seven = new TNode(7);
    TNode *eight = new TNode(8);
    TNode *nine = new TNode(9);

    seven->left = one;
    // 7
    // /\
    // 1 NULL

    seven->right = nine;
    // 7
    // /\
    // 1 9

    one->left = zero;
    // 7
    // /\
    // 1 9
    // /\
    // 0 NULL

    one->right = five;
    // 7
    // /\
    // 1 9
    // /\
    // 0 5

    nine->left = eight;
    // 7
    // /\
    // 1 9
    // /\
    // 0 5
    // /
    // 8 NULL

    preOrder(seven);
    cout << endl;

    inOrder(seven);
    cout << endl;

    postOrder(seven);
    cout << endl;

    return 0;
}
```

#### Output: 
![guided-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/944d2a51-c837-43fb-8d03-1269c0980550)

#### Interpretasi
Kode C++ di atas mendefinisikan struktur dan operasi dasar untuk sebuah pohon biner. Dimulai dengan mendeklarasikan pustaka iostream untuk fungsi input dan output, serta menggunakan namespace std. Struktur TNode didefinisikan untuk merepresentasikan node dalam pohon biner, dengan atribut data, left, dan right. Setiap node menyimpan sebuah nilai integer (data) serta pointer ke anak kiri (left) dan anak kanan (right). Konstruktor TNode menginisialisasi node baru dengan nilai tertentu dan mengatur anak kiri dan kanan ke NULL.

Terdapat tiga fungsi traversal yang berbeda untuk pohon biner: preOrder, inOrder, dan postOrder. Fungsi preOrder akan mengunjungi node saat ini terlebih dahulu, kemudian secara rekursif mengunjungi anak kiri dan anak kanan. Fungsi inOrder akan mengunjungi anak kiri terlebih dahulu, kemudian node saat ini, dan terakhir anak kanan. Fungsi postOrder akan mengunjungi anak kiri terlebih dahulu, kemudian anak kanan, dan terakhir node saat ini.

Dalam fungsi main, beberapa node pohon biner dibuat dan dihubungkan satu sama lain untuk membentuk struktur tertentu. Node zero, one, five, seven, eight, dan nine dibuat dengan nilai masing-masing. Node seven diatur sebagai root, dengan anak kiri one dan anak kanan nine. Node one memiliki anak kiri zero dan anak kanan five, sedangkan node nine memiliki anak kiri eight.

Setelah struktur pohon terbentuk, tiga jenis traversal dipanggil dan hasilnya dicetak ke layar: preOrder, inOrder, dan postOrder. Traversal ini memungkinkan kita melihat urutan kunjungan node dalam pohon biner tersebut. Akhirnya, program mengembalikan nilai 0, menandakan bahwa program telah selesai dieksekusi tanpa kesalahan.


## Referensi
[1] Triase. (2020). Struktur Data. Medan: Fakultas Saintek UIN SU.

[2] Hadari, A. (2019). "Graf (Graph) dan Pohon (Tree)". Diakses pada 8 Juni 2024, dari https://ahmadhadari77.blogspot.com/2019/05/graph-graf-dan-tree-pohon-algoritma.html

[3] Fariza, A. (2013). Graph. Surabaya: PENS.

[4] Putra, Z. E. (2014). "Pengertian dan Representasi Graph". Diakses pada 9 Juni 2024, dari https://www.slideshare.net/slideshow/makalah-graph-i/42413476

[5] Fosalgo. (2020, 5 Mei). ADT Graph | Adjacency Matrix dan Adjacency List. [Video]. Youtube. https://www.youtube.com/watch?v=VBBj-WcBipI

[3] Afifah, L., & Budayasa, I. K. (2023). Pelabelan Anggun Graf Berlian Rangkap Berbintang, Beberapa Kelas Graf Pohon, Dan Graf Corona Khusus. MATHunesa: Jurnal Ilmiah Matematika, 11(03), 368-382.
