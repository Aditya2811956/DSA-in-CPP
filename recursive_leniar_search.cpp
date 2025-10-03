#include<iostream>
#include<vector>
using namespace std;
int  search(int *arr,int size,int n, int target){
           if(size==0){
            return -1;
           }
           if(arr[0]==target){
            return n-size;
           }
           return search(arr+1,size-1,n,target);
}
int main(){
    int arr[10]={2,5,2,7,8,2,5,8,64,7};
    int n=10;
    int target=64;
    cout<<search( arr ,n,n,target);
    return 0;
}