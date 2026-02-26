#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> tripletsum(vector<int> &arr, int size, int s) {
    vector<vector<int>> ans;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {
                if (arr[i] + arr[j] + arr[k] == s) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end()); // ensure triplet is ordered
                    ans.push_back(temp);
                }
            }
        }
    }

    sort(ans.begin(), ans.end()); // sort all triplets
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int s = 10;
    int size = arr.size();

    vector<vector<int>> result = tripletsum(arr, size, s);

    cout << "Triplets with sum " << s << " are:\n";
    for (auto triplet : result) {
        cout << "(" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << ")\n";
    }

    return 0;
}