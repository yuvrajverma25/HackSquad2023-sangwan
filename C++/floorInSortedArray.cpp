#include<iostream>
#include<vector>
using namespace std;
int floorInSortedArray(int arr[], int n, int target){
    int start=0;
    int end=n-1;
    int result=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
            return arr[mid];
        if(arr[mid]<target){
            result=arr[mid];
            start=mid+1;
        }
        else if(arr[mid]>target)
            end=mid-1;
    }
    return result;
}
int main(){
    int n, target;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>target;
    cout<<"Floor: "<<floorInSortedArray(arr, n, target)<<endl;
    return 0;
}
