#include<iostream>
using namespace std;

int main(){
    int *ptr = nullptr;

    cout<<"Value of pointer: "<<ptr<<endl;
    cout<<"Is pointer null? "<<(ptr == nullptr ? "Yes" : "No")<<endl;
    return 0;
}