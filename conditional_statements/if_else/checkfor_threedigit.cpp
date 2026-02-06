#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number:"<<endl;
    cin>>num;
    if(num>99 && num<=999){
        cout<<"yes, ut's a three-digit number";
    }
    else{
        cout<<"not a three-digit number";
    }
    return 0;
}