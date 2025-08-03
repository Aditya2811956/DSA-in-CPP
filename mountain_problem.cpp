#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={18,29,38,59,98,100,99,98,90};
    int start=1,end=arr.size()-2;//not taking start =0 & end=arr.size()-1 because first and last element can't be peak value in mountain array
    bool a =true;
    while(start<=end){
        int mid =start+(end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<" Address of peak element  "<<arr[mid]<<" is "<<mid;
            a=false;
            break;
        }
        if(arr[mid]>arr[mid-1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(a){
        cout<<"invalid vector ";
    }
    return 0;
}