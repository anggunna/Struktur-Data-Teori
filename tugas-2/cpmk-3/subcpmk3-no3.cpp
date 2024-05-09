#include <iostream>
#include <vector>
#include <string>

using namespace std;

int findIndex(vector<string>& arr, string target) {
    int left = 0; 
    int right = arr.size() - 1; 

    while (left <= right) {
        int mid = left + (right - left) / 2; 

        while (arr[mid] == "" && mid >= left)
            mid--;

        if (mid < left)
            left = left + 1;
        else if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
}

int main() {
    vector<string> arr = {"Adi", "", "", "", "bermain", "", "bola", "", "", "sedang"}; 
    string target = "bola"; 

    int resultIndex = findIndex(arr, target);

    if (resultIndex != -1) {
        cout << "Output: " << resultIndex << endl;
    } else {
        cout << "Kata \"" << target << "\" tidak ditemukan dalam array" << endl;
    }

    return 0;
}
