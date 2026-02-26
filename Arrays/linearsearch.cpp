#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            return i; // return the index where element is found
        }
    }
    return -1; // if element not found
}

void printarray(int arr[], int n) {
    cout << "The array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printarray(arr, n);

    int k;
    cout << "Enter the element you want to search: ";
    cin >> k;

    int result = linearsearch(arr, n, k);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
