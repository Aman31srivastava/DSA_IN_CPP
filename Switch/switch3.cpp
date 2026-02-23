#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a digit: ";
    cin>>n;

    while(n>0){
        switch (n)
        {
        case 1:
            cout<<"yes";
            exit(0);
        
        default:
            cout<<"no";
        }
    }
}