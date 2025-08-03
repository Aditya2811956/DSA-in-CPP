#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={3,4,5,6,7,0,1,2};
    int n=arr.size();
    int start=0,end=n-1,target=1;
    while(start<=end){
        int mid =start +(end-start)/2;
        if(arr[mid]==target){
            cout<<target<< " has the address of "<<mid;
            break;
        }
        if(arr[start]<=arr[mid]){
            if(arr[start]<=target && arr[mid]>target){
               end=mid-1;
            } 
            else{
                start=mid+1;
            }
        }
        else{
            if(arr[mid]<target && arr[end]>=target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }

    }
    return 0;
}