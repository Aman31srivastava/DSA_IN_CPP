#include<iostream>
using namespace std;


int  main(){
    int arr[5]={1,2,3,4,5};
    int *p=&arr[0];  // p points to the first element of the array

    cout<<"Value at p: "<<*p<<endl;
    cout<<"value after incrementing p:"<<*p++<<endl;
    cout<<"value after pre incrementing of p:"<<*++p<<endl;
    cout<<"vlue after decrementing p: "<<*--p<<endl;
    
}