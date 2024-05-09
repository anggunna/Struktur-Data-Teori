#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isAnagram(string str1, string str2) {
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return (str1 == str2);
}

string checkAnagram(string string1, string string2) {
    if (isAnagram(string1, string2)) {
        return "anagram";
    } else {
        return "tidak anagram";
    }
}

int main() {
    string string1, string2;
    cout << "Masukkan string pertama: ";
    cin >> string1;
    cout << "Masukkan string kedua: ";
    cin >> string2;

    string result = checkAnagram(string1, string2);
    cout << "Output: " << result << endl;

    return 0;
}
