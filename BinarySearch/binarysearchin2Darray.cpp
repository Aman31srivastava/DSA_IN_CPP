#include <iostream>
#include <vector>
using namespace std;

// Function to search element in a sorted 2D matrix
bool searchelementin2Darray(vector<vector<int>> &matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        int element = matrix[mid / col][mid % col];  // Convert 1D index to 2D

        if (element == target) {
            return true; // Element found
        }
        else if (element < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return false; // Element not found
}

int main() {
    // Example matrix (sorted row-wise and column-wise)
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    // Call the function
    bool found = searchelementin2Darray(matrix, target);

    // Output result
    if (found)
        cout << "Element " << target << " found in the matrix ✅" << endl;
    else
        cout << "Element " << target << " not found in the matrix ❌" << endl;

    return 0;
}
