#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cout<<"enter the three sides of the triangle:"<<endl;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a){
        cout<<"makes a triangle.";
    }
    else{
        cout<<"no";
    }
}