#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"enter the base & exponential power respectively: ";
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;

    }
    cout<<"the power of the given number is   : "<<ans;
}