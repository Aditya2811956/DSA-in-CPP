#include<iostream>
#include<vector>
using namespace std;
    int Rightbound(const vector<int>& arr, int target){//start==left , end==right
        int index=-1,left=0,right=arr.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]==target){
               index=mid;
               left=mid+1;
            }
            else if(arr[mid]<target){
               left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return index;
    }

    int Leftbound( const vector<int> arr,int target){
        int index=-1,left=0,right=arr.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]==target){
                index=mid;
                right=mid-1;
            }
            else if(arr[mid]<target){
               left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return index;
    }
    int main() {
        vector<int> arr={5,7,7,7,8,10};
        int target=7;
        int a=Leftbound( arr, target);
        int b=Rightbound( arr, target);
        cout<<a<<" "<<b;
    }