#include<iostream>
using namespace std;
int main(){

    int costprice;
    int sellprice;
    cout<<"enter the costprice and sellingprice respectively:";
    cin>>costprice>>sellprice;
    int profit = sellprice - costprice;
    if(sellprice>costprice){
        cout<<"yes, profit of:"<<profit;
        
    }
    else if(sellprice ==  costprice){
        cout<<"NO PROFIT, NO LOSS"<<endl;
    }
    else{
        cout<<"loss hogya yaaar";
    }

    return 0;
}