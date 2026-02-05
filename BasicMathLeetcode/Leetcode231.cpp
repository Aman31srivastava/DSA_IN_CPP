#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a number to check its power : ";
    cin>>n;
    for(int i=0;i<31;i++){
        int ans=pow(2,i);
        if(ans==n){
            return true;
        }
        return false;
    }
}