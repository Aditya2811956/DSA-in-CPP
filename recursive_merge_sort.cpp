#include<iostream>
using namespace std;
void merge(int *arr, int st, int end){
    int mid=st+(end-st)/2;
    int len1=mid-st+1;
    int len2=end-mid;

    int *first= new int[len1];
    int *second= new int[len2];
    
    int idx1=st;
    for(int i=0;i<len1;i++){
        first[i]=arr[idx1++];
    }
    idx1=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[idx1++];
    }

    //merge two sorted array basically merge kr rhe hai sort krte hue
    idx1=0;
    int idx2=0;
    int idxx=st;
    while(idx1<len1 && idx2<len2){
          if(first[idx1]<=second[idx2]){
             arr[idxx++]=first[idx1++];
          }
          else{
            arr[idxx++]=second[idx2++];
          }
    }
    while(idx1<len1){
        arr[idxx++]=first[idx1++];
    }
    while(idx2<len2){
        arr[idxx++]=second[idx2++];
    }
}
void mergeSort(int *arr,int st, int end){
    int mid=st+(end-st)/2;
    if(st>=end){
        return;
    }

    //left part
     mergeSort(arr,st,mid);

     //right part
     mergeSort(arr,mid+1,end);

     //merge
     merge(arr,st,end);
}
int main(){
    int arr[10]={1,4,2,6,2,8,3,8,3,7};
    mergeSort (arr, 0,  9);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}