#include<iostream>
using namespace std;
int main(){  //hammingweight
    int n;
    cout<<"enter an integer : ";
    cin>>n;
    int count=0;
    while(n>0){
        //checking last bit
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
    
}