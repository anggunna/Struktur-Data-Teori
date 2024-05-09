#include <iostream>
#include <algorithm>

using namespace std;

void mergeArrays(int A[], int m, int B[], int n) {
    int i = m - 1; 
    int j = n - 1; 
    int k = m + n - 1; 

    while (i >= 0 && j >= 0) {
        if (A[i] > B[j]) {
            A[k] = A[i];
            i--;
        } else {
            A[k] = B[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        A[k] = B[j];
        j--;
        k--;
    }

    sort(A, A + m + n);
}

int main() {
    int A[10] = {1, 3, 5, 7, 9};
    int B[] = {2, 4, 6, 8, 10};
    int m = 5; 
    int n = 5; 

    mergeArrays(A, m, B, n);

    cout << "Array yang digabungkan dan diurutkan: " << endl;
    for (int i = 0; i < m + n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
