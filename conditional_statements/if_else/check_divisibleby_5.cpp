#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number to check the divisibility"<<endl;
    cin>>num;
    if(num%5==0){
        cout<<"yes , its divisble by 5"<<endl;
    }
    else{
        cout<<"nope, sorry";
    }

    return 0;
}