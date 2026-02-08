#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter two numbers : ";
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y;
}