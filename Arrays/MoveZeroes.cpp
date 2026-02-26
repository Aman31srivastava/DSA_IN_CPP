#include <iostream>
#include <vector>
using namespace std;

// Function to move all zeros to the end
void Movezeros(vector<int> &nums) {
    int i = 0; // pointer for non-zero position
    for (int j = 0; j < nums.size(); j++) {
        if (nums[j] != 0) {
            swap(nums[i], nums[j]);
            i++;
        }
    }
}

int main() {
    // Initialize the vector
    vector<int> nums = {0, 10, 2, 0, 3};

    cout << "Before moving zeros: ";
    for (int n : nums)
        cout << n << " ";
    cout << endl;

    // Call the function
    Movezeros(nums);

    cout << "After moving zeros: ";
    for (int n : nums)
        cout << n << " ";
    cout << endl;

    return 0;
}
