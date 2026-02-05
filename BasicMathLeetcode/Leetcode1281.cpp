/*find the difference of the product and sum of the digits of the given integer*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the digit : ";
    cin>>n;
   int sum = 0;
        int pro = 1;

        // Use a for loop instead of while
        for (int i = n; i > 0; i = i / 10) {
            int digit = i % 10;   // extract the last digit
            sum += digit;         // add digit to sum
            pro *= digit;         // multiply digit to product
        }

        return pro - sum;         // return the differenc
    }