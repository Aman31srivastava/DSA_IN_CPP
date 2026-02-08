#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x,y;
    cout<<"enter two numbers: ";
    cin>>x>>y;
    cout<<x<<" "<<y;
    swap(x,y);
    cout<<"After swapping: "<<x<<y;
}