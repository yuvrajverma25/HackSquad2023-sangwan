#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int meh = 0;
    int msf = INT_MIN;
    for(int i=0;i<8;i++){
        meh = meh + arr[i];

        if(meh < arr[i]){
            meh = arr[i];
        }

        if(meh>msf){
            msf = meh;
        }
    }

    cout<<msf;

    return 0;
}