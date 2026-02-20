#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;
    int i=1;//row
    while(i<=n){
        int j=1;//column
        while(j<=n){
        cout<<"#";
        j=j+1;
        }
    
    cout<<endl;
    i=i+1;
    }

}



/*  ###
    ###
    ###
*/