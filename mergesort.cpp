#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Merge the two halves in sorted order
    while (left <= mid && right <= high) {
        if (a[left] <= a[right]) {
            temp.push_back(a[left]);
            left++;
        } else {
            temp.push_back(a[right]);
            right++;
        }
    }

    // Copy remaining elements from left half
    while (left <= mid) {
        temp.push_back(a[left]);
        left++;
    }

    // Copy remaining elements from right half
    while (right <= high) {
        temp.push_back(a[right]);
        right++;
    }

    // Transfer sorted elements back to original array
    for (int i = low; i <= high; i++) {
        a[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &a, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergeSort(a, low, mid);
    mergeSort(a, mid + 1, high);
    merge(a, low, mid, high);
}

int main() {
    vector<int> a = {9, 4, 7, 6, 3, 1, 5};
    int n = a.size();

    mergeSort(a, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
