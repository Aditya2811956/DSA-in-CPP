#include<iostream>
#include<algorithm>
using namespace std;

int partition(int *arr, int st, int end){
    int x=arr[st];
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=st+1;i<=end;i++){
        if(arr[i]<arr[st]){
            count++;
        }
    }
    int pivot=st+count;
    swap(arr[st],arr[pivot]);
    int i=st,j=end;
    while(i<pivot && j>pivot){
          while(arr[i]<=pivot){
            i++;
          }
          while(arr[j]>=pivot){
            j--;
          }
          if(i<pivot && j>pivot){
            swap(arr[i],arr[j]);
          }
    }
    return pivot;
}
void quickSort(int *arr, int st, int end){
     
    //base case 
    if(st>=end){
        return;
    }
     int p=partition(arr, st,end);
     
     //left sort
     quickSort(arr, st, p-1);
     
     //right sort
     quickSort(arr, p+1, end);

}
int main(){
    int arr[5]={6,2,8,1,7};
    int n=5;

    quickSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     
    return 0;
}