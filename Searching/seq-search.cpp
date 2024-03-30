#include <iostream>
#include <vector>

int sequentialSearch(std::vector<int> arr, int key) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            return i; // Nilai ditemukan, kembalikan indeks
        }
    }
    return -1; // Nilai tidak ditemukan
}

int main() {
    std::vector<int> arr = {5, 9, 10, 2, 90, 4};
    int key = 90;
    int result = sequentialSearch(arr, key);
    if (result != -1) {
        std::cout << "Nilai ditemukan di indeks: " << result << std::endl;
    } else {
        std::cout << "Nilai tidak ditemukan." << std::endl;
    }
    return 0;
}
