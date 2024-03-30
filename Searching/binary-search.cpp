#include <iostream>
#include <vector>

int binarySearch(std::vector<int> arr, int key) {
    int low = 0;
    int high = arr.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == key) {
            return mid; // Nilai ditemukan, kembalikan indeks
        } else if (arr[mid] < key) {
            low = mid + 1; // Cari di setengah kanan
        } else {
            high = mid - 1; // Cari di setengah kiri
        }
    }
    
    return -1; // Nilai tidak ditemukan
}

int main() {
    std::vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int key = 23;
    int result = binarySearch(arr, key);
    if (result != -1) {
        std::cout << "Nilai ditemukan di indeks: " << result << std::endl;
    } else {
        std::cout << "Nilai tidak ditemukan." << std::endl;
    }
    return 0;
}
