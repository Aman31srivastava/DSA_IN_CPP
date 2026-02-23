#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two numbers for the operations : ";
    cin>>a>>b;
    char ops;
    cout<<"enter an operation you want to perform: ";
    cin>>ops;

    switch (ops)
    {
    case '+':
        cout<<(a+b);
        break;
     case '-':
        cout<<(a-b);
        break;
     case '*':
        cout<<(a*b);
        break;
     case '/':
        cout<<(a/b);
        break;
     case '%':
        cout<<(a%b);
        break;
    
    default:
        cout<<"Enter a valid operation to be performed";
    }
}