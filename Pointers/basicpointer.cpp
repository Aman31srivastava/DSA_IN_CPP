#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *ptr=&a;  //singlepointer
    int *ptr2 = ptr;   //pointer to pointer
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of pointer: "<<*ptr<<endl;
    cout<<"Address of a: "<<ptr<<endl;
    cout<<"Value of pointer2: "<<*ptr2<<endl;
    cout<<"Address of pointer2: "<<ptr2<<endl;
    cout <<"Address of pointer: "<<&ptr<<" "<<*ptr<<endl;

    return 0;
}