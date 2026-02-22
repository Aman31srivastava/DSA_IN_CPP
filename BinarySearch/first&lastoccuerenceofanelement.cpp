#include<iostream>
#include<vector>
using namespace std;

int  first(vector<int>& a, int t) {
        int low = 0, high = a.size() - 1;
        int res = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (a[mid] == t) {
                res = mid;
                high = mid - 1;  // search on left side
            } 
            else if (a[mid] > t)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return res;
    }

    int last(vector<int>& a, int t) {
        int low = 0, high = a.size() - 1;
        int res = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (a[mid] == t) {
                res = mid;
                low = mid + 1;  // search on right side
            } 
            else if (a[mid] > t)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return res;
    }

    vector<int> searchRange(vector<int>& a, int t) {
        return {first(a, t), last(a, t)};
    }
