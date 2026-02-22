#include<iostream>
using namespace std;


int main(){
    int n;
    int arr[n]={1,2,3,4,5};
    int key;
    cout<<"enter an element to search in the array:";
    cin>>key;
    int start=0;
    int end=n-1;

    for(int i=0;i<5;i++){
        int mid= start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;        }
        else{
            end=mid-1;
        }
    }
    return -1;

    
}