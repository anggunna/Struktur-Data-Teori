# <h1 align="center">Rekursif</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori


```

## Contoh Kode Rekursif

```C++
#include <iostream>

using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int num;

    // Meminta pengguna untuk memasukkan bilangan bulat positif
    cout << "Masukkan bilangan bulat positif: ";
    cin >> num;

    // Mengecek apakah input adalah bilangan bulat positif
    if (num < 0) {
        cout << "Input tidak valid. Silakan masukkan bilangan bulat positif." << endl;
    } else {
        // Menghitung dan mencetak hasil faktorial
        int hasil = faktorial(num);
        cout << "Faktorial dari " << num << " adalah: " << hasil << endl;
    }

    return 0;
}
```

#### Output: 
![unguided-1](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/157208635/eee6b8ef-cf33-4424-a764-1583d1daaa45)

#### Interpretasi
Kode di atas  merupakan program sederhana yang menghitung faktorial dari sebuah bilangan bulat positif yang dimasukkan oleh pengguna. Program ini dimulai dengan mendeklarasikan fungsi `faktorial` yang mengambil satu parameter, yaitu `n`, yang merupakan bilangan bulat. Fungsi ini mengimplementasikan rekursi untuk menghitung faktorial dari bilangan tersebut. Jika `n` sama dengan 0 atau 1, fungsi akan mengembalikan nilai 1. Namun, jika `n` lebih besar dari 1, fungsi akan mengembalikan hasil perkalian antara `n` dan hasil dari pemanggilan rekursif fungsi `faktorial` dengan parameter `n - 1`.

Kemudian, program memasuki fungsi `main()`. Di dalam `main()`, program meminta pengguna untuk memasukkan sebuah bilangan bulat positif menggunakan pernyataan `cout`. Input yang dimasukkan oleh pengguna disimpan dalam variabel `num` menggunakan pernyataan `cin`. Program kemudian memeriksa apakah input yang dimasukkan adalah bilangan bulat positif. Jika input adalah bilangan negatif, program akan mencetak pesan kesalahan yang menunjukkan bahwa input tidak valid. Namun, jika input adalah bilangan bulat positif, program akan menghitung faktorial dari bilangan tersebut dengan memanggil fungsi `faktorial` dan mencetak hasilnya menggunakan pernyataan `cout`.

Dengan demikian, program ini memberikan kemampuan kepada pengguna untuk menghitung faktorial dari bilangan bulat positif yang dimasukkan, sambil memastikan validitas input yang diterima.

**Kesimpulan**

Rekursif adalah konsep fundamental dalam C++ yang memungkinkan penyelesaian masalah dengan cara yang elegan dan seringkali lebih sederhana. Namun, rekursi juga memerlukan pemahaman yang baik tentang kondisi dasar dan validasi input untuk menghindari kesalahan seperti stack overflow.

## Referensi
[1] A. S. R. St. MTi, STRUKTUR DATA DAN ALGORITMA DENGAN C++. CV. AA. RIZKY, 2019.

[2] S. Anam, I. Yanti, Z. Fitriah, and U. Habibah, Cara mudah belajar bahasa pemrograman C++. Universitas Brawijaya Press, 2021.

[3] F. A. Twince Tobing, P. Prayogo, and A. Chandra, "Analisis Perbandingan Fibonacci dengan Iterasi dan Rekursi Terhadap Efektifitas Waktu", Jurnal Sains dan Teknologi Widya, vol. 1, no. 2, pp. 188-195, Jul. 2022.

[4] R. Firliana, R. Rina, dan P. Kasih, "Struktur Data yang Terorganisir," dalam Algoritma dan Pemrograman C++, Adjie Media Nusantara, Hal.1-82, 2019.

