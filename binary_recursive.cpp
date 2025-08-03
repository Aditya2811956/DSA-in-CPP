#include<iostream>
#include<vector>
using namespace std;
int Binsearch(vector <int> arr,int start, int end, int target){
      if(start<=end){
        int mid= start+(end-start)/2;//for optimation or no overflow we use int mid= start+(end-start)/2;
        if(arr[mid]<target){
            return Binsearch(arr ,mid +1, end,target);
        }
        else if(arr[mid]>target){
            return Binsearch(arr ,start, mid-1,target);
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
 vector <int> arr={1,2,3,4,5,6,7,8,9};
    int n=arr.size();
    int target=9;
    int start=0;
    int end=n-1;
    cout<<Binsearch(arr,start,end,target);
    return 0;
}
