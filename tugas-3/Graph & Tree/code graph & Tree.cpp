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