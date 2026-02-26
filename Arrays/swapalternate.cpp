#include<iostream>
using namespace std;

void swapalternate(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
             swap(arr[i],arr[i+1]);
        }
    }
}

void printarr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int odd[5]={1,2,3,4,5};
    int even[6]={2,4,6,8,10,12};

    swapalternate(odd,5);
    printarr(odd,5);
    cout<<endl;

    swapalternate(even,6);
    printarr(even,6);
    return 0;
}