/*#include<iostream>
using namespace std;

int main(){

    int N;
    cout<<"Enter N : ";
    cin>>N;
    int f=1; //isme hum store krte rahenge factors
    for(int i=1;i<N;i++){
        if(N%i==0)f=i;
    }
    cout<<f;
}
    */

//optimise solution,saving resources...

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int f=1;
    for(int i=n/2;i>=1;i--){
        if(n%i==0)f=i;break;//to get out of the loop suddenly...
    }
    cout<<f;
}