#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung jumlah kemunculan huruf vokal 'a' dalam sebuah kalimat
int countOccurrences(const string& sentence, char target) {
    int count = 0;
    for (char c : sentence) {
        if (tolower(c) == target) // Mengubah huruf besar menjadi huruf kecil dan memeriksa kesesuaian dengan 'a'
            count++;
    }
    return count;
}

int main() {
    string kalimat = "saya suka memasak";
    char target = 'a';

    // Menghitung jumlah kemunculan huruf 'a' dalam kalimat
    int jumlah_a = countOccurrences(kalimat, target);

    cout << "Jumlah huruf 'a' dalam kalimat '" << kalimat << "' adalah: " << jumlah_a << endl;

    return 0;
}
