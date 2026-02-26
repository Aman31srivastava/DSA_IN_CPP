#include <iostream>
#include <vector>
using namespace std;

vector<int> findarrayintersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
    int i = 0, j = 0;
    vector<int> ans;
    
    // Assuming both arrays are sorted
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 4};
    vector<int> arr2 = {3, 4, 5, 6};
    int n = arr1.size();
    int m = arr2.size();

    vector<int> result = findarrayintersection(arr1, n, arr2, m);

    cout << "Intersection elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
