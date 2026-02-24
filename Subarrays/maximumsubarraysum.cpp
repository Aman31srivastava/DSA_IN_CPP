//bruteforces
#include<iostream>
using namespace std;

int main(){
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};
    int maxsum=INT8_MIN;
    for(int st=0;st<n;st++){
        int sum=0;
        for(int end=st;end<n;end++){
            sum+=arr[end];
            maxsum=max(maxsum,sum);
        }

    }
    cout<<"Maximum subarray sum is: "<<maxsum<<endl;

}