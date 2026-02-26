#include <iostream>
#include <vector>
using namespace std;

void mergetwosortedarray(vector<int>& arr1, int m, vector<int>& arr2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    // Merge from the back using two pointers
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        } else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }

    // If elements remain in arr2, copy them
    while (j >= 0) {
        arr1[k] = arr2[j];
        k--;
        j--;
    }
}

// Function to print a vector
void print(vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 0, 0, 0}; // total size = m + n
    vector<int> arr2 = {3, 4, 5};
    int m = 4; // number of valid elements in arr1
    int n = 3; // number of elements in arr2

    mergetwosortedarray(arr1, m, arr2, n);

    cout << "Merged sorted array: ";
    print(arr1);

    return 0;
}
