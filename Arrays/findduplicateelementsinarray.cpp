#include<iostream>
using namespace std;
void Duplicateelements(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];  //xor of array elements
    }
    for(int i=1;i<size;i++){
        ans=ans^i;  //xor of 1 to n-1 elements
    }
    cout<<ans;
}

int main(){
    int arr[5]={1,2,3,2,4};
    int size=5;
    Duplicateelements(arr,size);
}