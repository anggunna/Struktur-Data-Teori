#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mencari huruf 'A' dalam string
bool searchForA(const string& sentence) {
    for (char c : sentence) {
        if (c == 'A' || c == 'a') // Memeriksa baik huruf besar maupun kecil
            return true;
    }
    return false;
}

int main() {
    string sentence;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, sentence);

    // Mencari huruf 'A' dalam kalimat menggunakan pencarian linear
    if (searchForA(sentence))
        cout << "Huruf 'A' ditemukan dalam kalimat." << endl;
    else
        cout << "Huruf 'A' tidak ditemukan dalam kalimat." << endl;

    return 0;
}
