# <h1 align="center">Rekursif</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori
Rekursif adalah teknik pengulangan suatu proses dengan menggunakan prinsip kesamaan diri. Metode ini memecahkan masalah dengan memanggil dirinya sendiri untuk menangani bagian yang lebih kecil dari masalah tersebut [1]. Kode rekursif biasanya lebih singkat dan lebih mudah ditulis dibandingkan dengan kode yang menggunakan loop. Biasanya, loop diubah menjadi fungsi rekursif saat proses kompilasi atau interpretasi. Rekursif sangat berguna untuk tugas-tugas yang bisa didefinisikan melalui subtugas yang mirip. Contohnya, masalah seperti sortir, pencarian, dan traversal sering kali memiliki solusi rekursif yang sederhana [2].

![Recursive Factorial](https://github.com/FerdinanSilaen/Praktikum-Strukdat-1/assets/157208635/81949752-df2f-40fd-8c7d-804cc271330e)

Rekursif terbagi menjadi dua jenis, yaitu Rekursif Langsung dan Rekursif Tidak Langsung. Rekursif Langsung terjadi ketika sebuah fungsi memanggil dirinya sendiri secara langsung, tanpa melalui fungsi lain. Sebaliknya, Rekursif Tidak Langsung terjadi ketika sebuah fungsi memanggil fungsi lain, yang pada akhirnya akan memanggil fungsi asli tersebut.

### Rekursif Langsung
Rekursif langsung adalah metode di mana sebuah fungsi memanggil dirinya sendiri tanpa melalui fungsi lain. Dalam rekursi, fungsi rekursif memiliki kasus dasar yang bisa diselesaikan secara langsung dan kasus kompleks yang dipecah menjadi sub-kasus serupa dengan ukuran lebih kecil. Analisis efisiensi waktu algoritma rekursif melibatkan penentuan persamaan rekursif untuk menghitung eksekusi operasi dasar berdasarkan ukuran masukan [3].

**Kelebihan dan Kekurangan Rekursif Langsung**

**Kelebihan**
- Mudah untuk perulangan dengan batasan luas: Rekursif langsung memungkinkan perulangan dalam skala besar tanpa memerlukan perulangan kompleks.
Dapat melakukan perulangan dengan batasan fungsi: Memungkinkan penanganan perulangan dengan kompleksitas tinggi yang dibatasi oleh fungsi.

**Kekurangan**
- Tidak bisa melakukan nested loop: Rekursif langsung tidak dapat menangani perulangan bersarang karena fungsi hanya memanggil dirinya sendiri.
- Fungsi sulit dipahami: Fungsi rekursif bisa menjadi sulit dipahami, terutama jika tidak ada batasan yang jelas untuk menghentikan perulangan.
- Memerlukan stack lebih besar: Membutuhkan stack besar untuk menyimpan variabel lokal dan parameter setiap kali fungsi dipanggil, yang bisa menyebabkan stack overflow jika tidak dikelola dengan baik.
- Proses agak rumit: Rekursif langsung bisa membuat proses perulangan berbelit-belit karena pemanggilan fungsi berulang dan data yang ditumpuk.

Rekursif langsung umumnya digunakan untuk memecahkan masalah yang bisa direduksi menjadi sub-masalah serupa yang lebih kecil. Fungsi rekursif langsung memanggil dirinya sendiri tanpa melalui fungsi lain, memungkinkan penanganan perulangan yang lebih kompleks. Rekursif langsung dapat membuat kode lebih ringkas, elegan, dan sederhana jika digunakan dengan baik, namun penting untuk menghindari rekursi tak berhingga yang bisa menyebabkan StackOverflowError [4].

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

## Referensi
[1] A. S. R. St. MTi, STRUKTUR DATA DAN ALGORITMA DENGAN C++. CV. AA. RIZKY, 2019.

[2] S. Anam, I. Yanti, Z. Fitriah, and U. Habibah, Cara mudah belajar bahasa pemrograman C++. Universitas Brawijaya Press, 2021.

[3] F. A. Twince Tobing, P. Prayogo, and A. Chandra, "Analisis Perbandingan Fibonacci dengan Iterasi dan Rekursi Terhadap Efektifitas Waktu", Jurnal Sains dan Teknologi Widya, vol. 1, no. 2, pp. 188-195, Jul. 2022.

[4] R. Firliana, R. Rina, dan P. Kasih, "Struktur Data yang Terorganisir," dalam Algoritma dan Pemrograman C++, Adjie Media Nusantara, Hal.1-82, 2019.

