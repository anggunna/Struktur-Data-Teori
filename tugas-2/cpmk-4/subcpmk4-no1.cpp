#include <iostream>
#include <string>

using namespace std;

// Struct adalah kumpulan dari satu atau lebih variabel yang berbeda tipe data yang dikelompokkan bersama dalam satu unit. 
// Dalam C++, struct dapat digunakan untuk membuat tipe data baru yang terdiri dari beberapa variabel dengan berbagai tipe data.
struct Mahasiswa {
    string nama;
    int umur;
    string jurusan;
};

int main() {
    Mahasiswa mahasiswa1;

    mahasiswa1.nama = "Budi";
    mahasiswa1.umur = 20;
    mahasiswa1.jurusan = "Teknik Informatika";

    cout << "Data Mahasiswa 1:" << endl;
    cout << "Nama: " << mahasiswa1.nama << endl;
    cout << "Umur: " << mahasiswa1.umur << " tahun" << endl;
    cout << "Jurusan: " << mahasiswa1.jurusan << endl;

    Mahasiswa mahasiswa2 = {"Ani", 22, "Sistem Informasi"};

    cout << "\nData Mahasiswa 2:" << endl;
    cout << "Nama: " << mahasiswa2.nama << endl;
    cout << "Umur: " << mahasiswa2.umur << " tahun" << endl;
    cout << "Jurusan: " << mahasiswa2.jurusan << endl;

    return 0;
}
