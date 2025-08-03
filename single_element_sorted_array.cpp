#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,1,2,2,3};
    int end=arr.size()-1,start=0;
    while(start<=end){
        int mid=start+(end-start)/2;  
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
           cout<<arr[mid];
           break;
        } 
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }    
        }
        else{
            if(arr[mid]==arr[mid+1]){
               end=mid-1;
            }
            else{
                start=mid+1;
            }
        } 
    }


    return 0;
}
