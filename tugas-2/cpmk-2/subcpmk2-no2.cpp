#include <iostream>

using namespace std;

// Fungsi untuk mengurutkan array menggunakan Bubble Sort
void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {  // Loop untuk iterasi sepanjang array
    bool swapped = false;  // Variabel untuk menandai apakah ada pertukaran pada iterasi ini
    for (int j = 0; j < n - i - 1; j++) {  // Loop untuk membandingkan pasangan elemen
      if (arr[j] > arr[j + 1]) {  // Jika elemen ke-j lebih besar dari elemen ke-(j+1), lakukan pertukaran
        swap(arr[j], arr[j + 1]);  // Pertukaran elemen
        swapped = true;  // Set swapped menjadi true untuk menandai bahwa ada pertukaran
      }
    }
    if (!swapped) {  // Jika tidak ada pertukaran dalam satu iterasi, array sudah terurut
      break;  // Keluar dari loop
    }
  }
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};  // Array yang akan diurutkan
  int n = sizeof(arr) / sizeof(arr[0]);  // Menentukan panjang array

  bubbleSort(arr, n);  // Memanggil fungsi Bubble Sort untuk mengurutkan array

  cout << "Array terurut: ";
  for (int i = 0; i < n; ++i) {  // Loop untuk mencetak array yang sudah terurut
    cout << arr[i] << " ";  // Cetak setiap elemen array
  }
  cout << endl;

  return 0;
}
