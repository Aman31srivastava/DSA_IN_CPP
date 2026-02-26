#include<iostream>
using namespace std;
void unique(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<ans;
}

int main(){
    int arr[5]={1,2,3,1,2};
    int n=5;
    unique(arr,n);
    return 0;
}