#include <iostream>
#include <vector>
#include <algorithm>  // for sort()
using namespace std;

vector<vector<int>> pairsum(vector<int> &arr, int size, int s) {
    vector<vector<int>> ans;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == s) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }

    sort(ans.begin(), ans.end()); // ✅ sorting after all pairs are found
    return ans;                   // ✅ return after loops complete
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int s = 7;
    int size = arr.size();

    vector<vector<int>> result = pairsum(arr, size, s);

    cout << "Pairs with sum " << s << " are:\n";
    for (auto pair : result) {
        cout << "(" << pair[0] << ", " << pair[1] << ")\n";
    }

    return 0;
}
