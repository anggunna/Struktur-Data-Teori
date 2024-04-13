#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menghitung jumlah kemunculan angka target dalam vektor data menggunakan Sequential Search
int countOccurrences(const vector<int>& data, int target) {
    int count = 0;
    for (int num : data) {
        if (num == target)
            count++;
    }
    return count;
}

int main() {
    // Data yang diberikan
    vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;

    // Menghitung jumlah kemunculan angka 4 dalam data menggunakan Sequential Search
    int jumlah_4 = countOccurrences(data, target);

    cout << "Jumlah angka " << target << " dalam data adalah: " << jumlah_4 << endl;

    return 0;
}
