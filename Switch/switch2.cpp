#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter an aplhabet(A-Z) to check ur luck : ";
    cin>>ch;
    switch (ch)
    {
    case 'S':
        cout<<"hurray";
        break;
    
    default:
        cout<<"ohno failed";
    }
}