
#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;  // starting index of unsorted part
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;  // update index of minimum element
            }
        }
        swap(a[i], a[min]); // swap minimum with first element of unsorted part
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int a[] = {4, 1, 5, 2, 3};

    selectionSort(a, n);
    printArray(a, n);

    return 0;
}