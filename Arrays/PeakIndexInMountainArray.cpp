#include<iostream>
#include<vector>
using namespace std;

int peakindexmountainarray(vector<int> &arr){
    int s=0, e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return mid;
        }
        else if(arr[mid ]<arr[mid +1]){
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid=s+(e-s)/2;
    } 

    return -1;
}