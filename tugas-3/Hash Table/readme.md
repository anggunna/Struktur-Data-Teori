# <h1 align="center">Hash Table</h1>
<p align="center">Anggun Dewanti (2311110022)</p>

## Dasar Teori
Tabel hash adalah metode untuk menyimpan data dalam memori dalam bentuk baris dan kolom, membentuk tabel yang dapat diakses dengan cepat [1]. Setiap sel yang merupakan pertemuan antara baris dan kolom di dalam tabel hash disebut slot. Tabel hash terdiri dari dua bagian utama: sebuah larik (array) dan sebuah fungsi untuk memetakan, yang disebut fungsi hash. Fungsi hash memetakan kunci-kunci yang diberikan ke dalam larik, mendistribusikan data yang dimasukkan pengguna ke dalam tabel atau larik yang telah disediakan [1].

![Hash Table](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/38a6c90c-385b-4aa7-bc4d-93fa1e84a24b)

Algoritma Hash memungkinkan penambahan, penghapusan, dan pencarian data dalam waktu konstan, yang juga dikenal sebagai kompleksitas waktu O(1) [2]. Teknik Hash adalah metode yang langsung mengakses catatan data dalam tabel dengan menghitung key yang berfungsi sebagai alamat record dalam tabel tersebut. Key ini bisa berupa data unik seperti nomor atau karakter string [3].

```
#include <iostream>
#include <unordered_map>
#include <vector>

struct Mahasiswa {
    std::string nim;
    int nilai;
};

class HashTable {
public:
    void tambahData(const std::string& nim, int nilai) {
        if (data.find(nim) != data.end()) {
            std::cout << "Data dengan NIM " << nim << " sudah ada.\n";
        } else {
            data[nim] = nilai;
            std::cout << "Data berhasil ditambahkan.\n";
        }
    }

    void hapusData(const std::string& nim) {
        if (data.erase(nim)) {
            std::cout << "Data dengan NIM " << nim << " berhasil dihapus.\n";
        } else {
            std::cout << "Data dengan NIM " << nim << " tidak ditemukan.\n";
        }
    }

    void cariDataNIM(const std::string& nim) {
        auto it = data.find(nim);
        if (it != data.end()) {
            std::cout << "NIM: " << it->first << ", Nilai: " << it->second << "\n";
        } else {
            std::cout << "Data dengan NIM " << nim << " tidak ditemukan.\n";
        }
    }

    void cariDataNilai(int minNilai, int maxNilai) {
        std::vector<Mahasiswa> hasil;
        for (const auto& pair : data) {
            if (pair.second >= minNilai && pair.second <= maxNilai) {
                hasil.push_back({pair.first, pair.second});
            }
        }
        if (hasil.empty()) {
            std::cout << "Tidak ada data yang ditemukan dalam rentang nilai " << minNilai << " - " << maxNilai << ".\n";
        } else {
            std::cout << "Data dalam rentang nilai " << minNilai << " - " << maxNilai << ":\n";
            for (const auto& mhs : hasil) {
                std::cout << "NIM: " << mhs.nim << ", Nilai: " << mhs.nilai << "\n";
            }
        }
    }

private:
    std::unordered_map<std::string, int> data;
};

int main() {
    HashTable ht;
    int pilihan;
    std::string nim;
    int nilai;
    int minNilai, maxNilai;

    do {
        std::cout << "Menu:\n";
        std::cout << "1. Tambah data\n";
        std::cout << "2. Hapus data\n";
        std::cout << "3. Cari data berdasarkan NIM\n";
        std::cout << "4. Cari data berdasarkan rentang nilai (80 - 90)\n";
        std::cout << "5. Keluar\n";
        std::cout << "Pilih opsi: ";
        std::cin >> pilihan;

        switch (pilihan) {
            case 1:
                std::cout << "Masukkan NIM: ";
                std::cin >> nim;
                std::cout << "Masukkan nilai: ";
                std::cin >> nilai;
                ht.tambahData(nim, nilai);
                break;
            case 2:
                std::cout << "Masukkan NIM: ";
                std::cin >> nim;
                ht.hapusData(nim);
                break;
            case 3:
                std::cout << "Masukkan NIM: ";
                std::cin >> nim;
                ht.cariDataNIM(nim);
                break;
            case 4:
                minNilai = 80;
                maxNilai = 90;
                ht.cariDataNilai(minNilai, maxNilai);
                break;
            case 5:
                std::cout << "Keluar dari program.\n";
                break;
            default:
                std::cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 5);

    return 0;
}
```

#### Output: 
![unguided-1](https://github.com/anggunna/Struktur-Data-Assignment/assets/157208635/ff2887ef-78f3-4faf-aed6-f62ca52ee378)

#### Interpretasi
Kode di atas menggunakan hash table dalam C++ untuk menyimpan data mahasiswa yang terdiri dari NIM (Nomor Induk Mahasiswa) dan nilai. Struktur Mahasiswa digunakan untuk mendefinisikan data mahasiswa dengan dua atribut: nim dan nilai. Kelas HashTable mengelola data menggunakan unordered_map dari C++ STL untuk menyimpan pasangan kunci (NIM) dan nilai.

Fungsi tambahData digunakan untuk menambahkan data mahasiswa baru ke dalam hash table. Jika NIM sudah ada, data tidak akan ditambahkan dan program akan menampilkan pesan bahwa data sudah ada. Fungsi hapusData menghapus data mahasiswa berdasarkan NIM. Jika NIM tidak ditemukan, program akan menampilkan pesan bahwa data tidak ditemukan.

Fungsi cariDataNIM mencari dan menampilkan data mahasiswa berdasarkan NIM. Jika NIM tidak ditemukan, program akan menampilkan pesan bahwa data tidak ditemukan. Fungsi cariDataNilai mencari dan menampilkan data mahasiswa yang nilainya berada dalam rentang tertentu, yaitu antara 80 dan 90. Jika tidak ada data yang memenuhi kriteria tersebut, program akan menampilkan pesan bahwa tidak ada data yang ditemukan dalam rentang nilai tersebut.

Bagian main menyediakan antarmuka pengguna dengan menu untuk mengakses fungsi-fungsi dalam kelas HashTable. Pengguna dapat memilih opsi untuk menambahkan data, menghapus data, mencari data berdasarkan NIM, mencari data berdasarkan rentang nilai, atau keluar dari program. Program akan terus berjalan hingga pengguna memilih opsi untuk keluar.

**Kesimpulan**
Hash table adalah struktur data efisien yang menyimpan data asosiatif dengan akses cepat dan operasi rata-rata O(1). Meskipun memiliki keunggulan dalam kecepatan akses dan kemudahan implementasi, hash table perlu dikelola dengan hati-hati untuk menghindari collision yang dapat mempengaruhi kinerja optimal. Kelebihannya mencakup akses data yang efisien, kegunaan yang luas untuk berbagai jenis data, serta kemudahan penggunaan. Namun, kelemahannya meliputi potensi penurunan kinerja saat collision sering terjadi, kebutuhan akan fungsi hash yang baik untuk mengurangi collision, dan kebutuhan akan alokasi memori tambahan.

## Referensi
[1] Barnes & Noble, Hash Tables, Sparknotes, http://www.sparknotes.com/ cs/searching/hashtables/section1.html.

[2] J. Prestiliano, “Aplikasi Tabel Hash dalam Pengarsipan dan Pencarian Data,” J. Teknol., vol. 4, no. 1, pp. 41–56, 2007.

[3] M.A. Weiss, Data Structures and Algorithm Analysis in Java, 3rd ed. Pearson Education, USA, 2012.