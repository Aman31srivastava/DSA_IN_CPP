#include <iostream>
#include <vector>
using namespace std;

// Function to rotate array to the right by k positions
void RotateArray(vector<int> &nums, int k) {
    vector<int> temp(nums.size());

    for (int i = 0; i < nums.size(); i++) {
        temp[(i + k) % nums.size()] = nums[i];
    }

    // Copy rotated array back to nums
    nums = temp;
}

int main() {
    // ❌ Wrong: vector<int> nums[5] creates an array of 5 vectors.
    // ✅ Correct:
    vector<int> nums = {1, 3, 4, 5, 3};

    int k = 2;

    cout << "Before rotation: ";
    for (int n : nums)
        cout << n << " ";
    cout << endl;

    // Call the rotation function
    RotateArray(nums, k);

    cout << "After rotation: ";
    for (int n : nums)
        cout << n << " ";
    cout << endl;

    return 0;
}
