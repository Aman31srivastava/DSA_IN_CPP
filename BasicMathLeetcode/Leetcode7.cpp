#include<iostream>
#include<climits>
using namespace std;

int main(){
    int  n;
    cout<<"enter an integer : ";
    cin>>n;
    int rev=0;
    while(n>0){
        int digit=n%10; //extract digit
        n/=10;
        if(rev>(INT_MAX/10)|| rev<(INT_MIN/10)){
            return 0;
        }
        rev=(rev*10)+digit;

    }
    return rev;
}