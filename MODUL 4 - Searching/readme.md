# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori
Algoritma searching merupakan rangkaian instruksi atau langkah-langkah yang dirancang untuk menemukan keberadaan atau lokasi suatu elemen tertentu dalam struktur data, seperti array, list, atau struktur data lainnya[2]. Searching, sesuai dengan namanya searching (mencari) metode ini bertujuan untuk mencari data dengan cara menelusuri data-data tersebut[1]. Tempat data dicari dapat berupa array dalam memori, bisa juga pada file yang ada di eksternal storage. Tujuan dari algoritma pencarian adalah untuk efisien menemukan elemen yang dicari tanpa harus memeriksa setiap elemen satu per satu. encarian linear melibatkan pemeriksaan elemen satu per satu hingga elemen yang dicari ditemukan. Di sisi lain, pencarian biner digunakan pada data yang sudah terurut dengan membagi daftar menjadi dua setiap langkah. Algoritma pencarian adalah salah satu konsep dasar dalam pemrograman yang penting untuk memahami cara efisien mengakses dan mengelola data[2].

## Sequential Search
Pencarian Sequential dalam C++ juga disebut sebagai pencarian linear. Teknik pencarian ini sangat sederhana, pengguna memulai perulangan dari indeks nol dari sebuah array hingga indeks terakhir dari sebuah array. Pencarian dimulai dari indeks pertama dan membandingkan nilai yang dibutuhkan dengan nilai pertama. Jika nilai yang dibutuhkan ditemukan, hasil akan ditampilkan; jika tidak, nilai dari indeks berikutnya akan dibandingkan dan pencarian akan terus dilakukan hingga nilai yang dibutuhkan ditemukan atau perulangan selesai tanpa menemukan nilai apa pun[3].
Dibawah ini beberapa proses cara kerja metode sequential search:
  1. Menentukan data yang akan dicari terlebih dahulu.
  2. Mencari data yang dicari pada array satu persatu dengan cara sekuensial.
  3. Dari data pertama hingga data terakhir yang terdapat pada array dibandingkan dengan data yang dicari.
  4. Apabila data ditemukan maka akan muncul statement sukses ditemukan.
  5. Apabila data tidak ditemukan maka juga akan muncul statement data tidak ditemukan[4].

## Binary Search
Binary Search adalah penggunaan metode pada sistem kontrol perpustakaan bertujuan untuk meningkatkan efisiensi pekerjaan dan kualitas pelayanan. Pada  sebuah rak buku yang tinggi dan besar tidak semua peminjam buku dapat mengecek dan mengambil buku yang dibutuhkan secara langsung. Kemudian, dikembangkan sistem kontrol perpustakaan yang  memudahkan manusia dalam melakukan peminjaman buku di perpustakaan. Metode binary searching berfungsi sebagai pencari data buku yang sesuai dengan judul, barcode scanner sebagai input menjalankan motor servo dengan bantuan antarmuka, dan inverse kinematik merupakan metode untuk menjalankan motor servo sesuai dengan sudut[5]. Salah satu syarat pencarian biner (Binary Search) yang dapat dilakukan adalah data sudah dalam keadaan terurut. Dengan kata lain, apabila data belum dalam keadaan urut, pencarian biner tidak dapat dilakukan. Dalam kehidupan sehari-hari, sebenarnya kita sering menggunakan pencarian biner, misalnya pada saat ingin mencari suatu kata dalam kamus[6].



## Guided 

### 1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data.
![guided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/fcc7fe75-129a-41a7-b2a3-f3c31adf9b84)

#### Interpretasi
Kode diatas adalah program implementasi dari algoritma Sequential Search yang sederhana untuk mencari sebuah angka dalam sebuah array. Menggunakan fungsi utama pada program 'int main()'. Pertama-tama, program memperbaiki nilai `n` menjadi 11 untuk sesuai dengan jumlah elemen dalam array `data`, yang terdiri dari angka-angka {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}. Kemudian, program mencari angka 10 dalam array menggunakan algoritma Sequential Search. Jika angka tersebut ditemukan, program akan memberi tahu pengguna pada indeks keberapa angka tersebut ditemukan dalam array. Namun, jika angka tidak ditemukan, program akan memberi tahu pengguna bahwa angka tersebut tidak ada dalam data yang dimasukkan.


### 2. Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search
![guided-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/1a6fbd82-2c52-422d-8007-5beffaf0a3b4)

#### Output :
![guided-2(output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/848230b6-e06e-41ce-a62d-86f6436d4630)

#### Interpretasi
Kode diatas adalah program implmentasi dari algoritma Binary Search. Pada baris pertama fungsi 'selection_sort' ini menerima sebuah array integer dan panjang array sebagai parameter. Menggunakan algoritma sorting yang disebut selection sort, yang berfungsi untuk mengurutkan array yang diberikan secara menaik. Pada baris kedua fungsi 'binarysearch' ini menerima sebuah array integer dan panjang array sebagai parameter. Menggunakan algoritma pencarian binary search, berfungsi ini akan mencari nilai yang dicari dalam array yang telah diurutkan secara terurut. Dan pada baris ketiga fungsi 'main' adalah fungsi utama dalam program. Variabel 'data' adalah array yang berisi data yang akan diurutkan dan dicari. Variabel 'length' adalah panjang dari array 'data'. Program akan menampilkan data awal, meminta pengguna untuk memasukkan data yang ingin dicari, mengurutkan data menggunakan selection sort, menampilkan data setelah diurutkan, melakukan pencarian menggunakan binary search, dan menunggu input dari pengguna sebelum keluar dari program menggunakan '_getche()'.
Maka, data {1 8 2 5 4 9 7} saya masukan yang dicari 5. Kemudian data diurutkan menjadi {1 2 4 5 7 8 9} dan ditemukan pada index ke-3



## Unguided 

### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search
![unguided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/2c55cbb4-a142-44b9-995f-7c2fc07a89c6)

#### Output :
![unguided-1(output)](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/d3d7e168-4a78-43ab-adf5-f0ba0f3bfe62)

#### Interpretasi
Kode diatas adalah program menggunakan binary search, menggunakan preprocessor directive untuk menyertakan dua header file yang diperlukan, yaitu iostream untuk input-output standar dan string untuk menggunakan tipe data string. Maka mendefinisikan fungsi 'searchForA' yang menerima satu parameter, yaitu sebuah string yang disebut 'sentence'. Fungsi ini mengembalikan nilai boolean true jika huruf 'A' (baik huruf besar maupun kecil) ditemukan dalam string 'sentence', dan false jika tidak ditemukan. Fungsi menggunakan loop for-each untuk mengiterasi melalui setiap karakter dalam string 'sentence' dan memeriksa apakah karakter tersebut adalah 'A' atau 'a'. Dan memulai fungsi utama dari program. Mendeklarasikan sebuah variabel string 'sentence' yang akan digunakan untuk menyimpan input kalimat dari pengguna. Meminta pengguna untuk memasukkan sebuah kalimat dan menyimpannya ke dalam variabel 'sentence' menggunakan fungsi 'getline(cin, sentence)'. Kemudian memanggil fungsi 'searchForA(sentence)' untuk mencari huruf 'A' dalam kalimat yang dimasukkan oleh pengguna. Jika huruf 'A' ditemukan dalam kalimat, maka pesan "Huruf 'A' ditemukan dalam kalimat." akan ditampilkan. Jika tidak, maka pesan "Huruf 'A' tidak ditemukan dalam kalimat." akan ditampilkan. Akhirnya, mengembalikan nilai 0, menandakan bahwa program berakhir dengan sukses.
Saya masukan kalimat : 'saya suka memasak' maka ditemukan huruf 'A'


### 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!
![unguided-2](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/ae14d797-fa51-449d-b0a5-e326fab50ce1)

#### Interpretasi
Kode diatas adalah program ini mencapai tujuannya dengan menggunakan perulangan untuk menghitung setiap karakter dalam string dan memeriksa apakah itu adalah huruf 'a' atau 'A'. Pertama fungsi 'countOccurrences' menerima dua parameter: string 'sentence' dan karakter 'target'. Fungsi ini mengembalikan jumlah kemunculan karakter 'target' dalam 'sentence'. Loop for-each digunakan untuk mengiterasi melalui setiap karakter dalam 'sentence'. Setiap karakter diubah menjadi huruf kecil dengan 'tolower', dan dibandingkan dengan 'target'. Jika sama, variabel 'count' bertambah satu. Setelah loop selesai, jumlah kemunculan 'target' dihitung dan dikembalikan. Kemudian memulai fungsi utama dari program. Mendeklarasikan sebuah variabel string 'kalimat' yang berisi kalimat yang akan dianalisis. Mendeklarasikan sebuah karakter 'target' yang merupakan karakter yang akan dihitung kemunculannya dalam 'kalimat'. Dan memanggil fungsi 'countOccurrences' untuk menghitung jumlah kemunculan huruf 'a' dalam kalimat 'kalimat'. Hasilnya disimpan dalam variabel 'jumlah_a'. Maka setiap kali ditemukan huruf 'a', hitungannya ditingkatkan. Kemudian, jumlah total huruf 'a' yang ditemukan dicetak di layar. Pada kalimat "saya suka memasak" muncul 'a' sebanyak 5, karena menggunakan fungsi 'countVowelA' untuk menghitung berapa kali huruf 'a' (baik huruf kecil maupun besar) muncul dalam string tersebut.


### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search !
![unguided-3](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/b8d488d9-3033-46a4-8eee-0a120357a960)

#### Interpretasi
Kode diatas adalah program sederhana untuk menggunakan Algoritma Sequential Search. Dan bertujuan untuk menghitung berapa kali angka 4 muncul dalam suatu data menggunakan algoritma pencarian sekuensial. Pertama masukkan fungsi 'countOccurrences' untuk menghitung jumlah kemunculan angka target dalam vektor data, fungsi int main() mendefinisikan data dan target.Maka program menggunakan vektor untuk menyimpan data bilangan bulat dan mendefinisikan variabel target sebagai angka yang ingin dicari, dalam hal ini angka 4. Setelah data dan target ditentukan, program memanggil fungsi yang menghitung jumlah kemunculan angka 4 dalam data menggunakan algoritma pencarian sekuensial. Hasil dari perhitungan tersebut kemudian dicetak ke layar sebagai output.



## Referensi
[1] Dodhieseptiawan. (2015). Searching pada C++. June 04, 2015, from https://dodhieseptiawan.blogspot.com/2015/06/ searching-pada-c.html

[2] Anak Males. (2024). Belajar C++ #14: Konsep Searching di C++. March 22, 2024, from https://anakmales.com/cpp-searching/

[3] HellGeeks. (2024). Sequential Search in C++ with examples. March 31, 2024, from https://www.hellgeeks.com/sequential-search/

[4] SarjanaPedia. (2019). Metode Searching dalam C++. February 25, 2019, from http://www.sarjanapedia.com/2019/02/metode-searching-dalam-cpp.html

[5] Achmad Nur Santoso, Adi Indera Dwi Anggara, Alfin Firman Syah, Luthfianti Wahyu Noerlillah, & Wahyu Surya Alamsyah. (2018). Sistem Kontrol Perpustakaan Menggunakan Metode Binary Searching. SinarFe7, 1(1), 365–368. Retrieved from https://journal.fortei7.org/index.php/sinarFe7/article/view/203

[6] Dodhieseptiawan. (2015). Searching pada C++. June 04, 2015, from https://dodhieseptiawan.blogspot.com/2015/06/searching-pada-c.html

