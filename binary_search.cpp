#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr={1,2,3,4,5,6,7,8,9};
    int n=arr.size();
    int target=98;
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid= start+(end-start)/2;//for optimation or no overflow we use int mid= start+(end-start)/2;
        if(arr[mid]==target){
            cout<<target<<" is found at "<< mid;
            break;
        }
        if(arr[mid]<target){
            start=mid+1;
        }
        if(arr[mid]>target){
            end=mid-1;
        }
        else{
            cout<< target <<" not found in array";
            break;
        }
    }
    return 0;
}