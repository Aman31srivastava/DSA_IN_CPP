#include<iostream>
using namespace std;

int printarr(int arr[], int size ){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4};
    int size=4;
    cout<<printarr(arr,size);
}