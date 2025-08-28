#include<iostream>
#include<vector>
using namespace std;
int binary(vector<int> arr,int target,int st,int end){
    int mid=(st+end)/2;
    if(arr[mid]==target) return mid;
    if(arr[mid]<target){
        return binary( arr, target, mid+1, end); 
    }
    if(arr[mid]>target){
        return binary( arr, target, st, mid-1);
    }
}

int main(){
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
    int target = 4;
    cout<<binary(arr,target,0,n-1);
    return 0;
}