#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"enter the number:";
    cin>>num;
    if((num%5==0 || num%3==0) && num%15!=0){
        cout<<"hurray";
    }
    else{
        cout<<"uhh";
    }
}


