#include <bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j > 0 && a[j - 1] > a[j]) {
            swap(a[j], a[j - 1]);
            j--;
        }
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[] = {13, 46, 24, 52, 20, 9};
    int n = 6;

    insertionSort(a, n);
    printArray(a, n);

    return 0;
}
