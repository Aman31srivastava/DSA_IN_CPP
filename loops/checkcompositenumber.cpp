#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    //if n has extra factor other than i & n
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<"Composite";
            break;
        }
    }
}