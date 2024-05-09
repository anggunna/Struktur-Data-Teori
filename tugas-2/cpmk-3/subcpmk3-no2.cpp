#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk mencari indeks target dalam array menggunakan Binary Search
int binarySearch(vector<int>& arr, int target) {
    int left = 0;  // Indeks paling kiri dalam array
    int right = arr.size() - 1;  // Indeks paling kanan dalam array

    while (left <= right) {  // Selama left kurang dari atau sama dengan right, lakukan pencarian
        int mid = left + (right - left) / 2;  // Hitung indeks tengah

        if (arr[mid] == target) {  // Jika elemen di tengah sama dengan target, kembalikan indeks mid
            return mid;
        }

        else if (arr[mid] > target) {  // Jika elemen di tengah lebih besar dari target, geser right ke mid - 1
            right = mid - 1;
        }

        else {  // Jika elemen di tengah lebih kecil dari target, geser left ke mid + 1
            left = mid + 1;
        }
    }

    return -1;  // Jika target tidak ditemukan, kembalikan -1
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15};  // Array yang akan dicari
    int target = 7;  // Elemen yang akan dicari dalam array

    int result = binarySearch(arr, target);  // Panggil fungsi binarySearch

    if (result != -1) {  // Jika hasil pencarian bukan -1 (elemen ditemukan)
        cout << "Elemen " << target << " ditemukan di indeks ke-" << result << endl;  // Cetak indeks elemen yang ditemukan
    } else {  // Jika hasil pencarian -1 (elemen tidak ditemukan)
        cout << "Elemen " << target << " tidak ditemukan dalam array" << endl;  // Cetak bahwa elemen tidak ditemukan
    }

    return 0;
}
