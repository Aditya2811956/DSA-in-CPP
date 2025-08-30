#include<iostream>
#include<vector>
using namespace std;
// product of number
// int num(int n){
    
//      if(n==0){
//         return 1;
//      }
//      return n * num(n-1);
// }

//fibonacci number
// int fib(int n){
//      if(n==1 || n==0){
//         return n;
//      }
//      return fib(n-1) + fib(n-2);
// }
// int main(){
//     cout<<fib(3);
//     return 0;
// }


//check if sorted
// bool isSorted(vector<int> arr ,int n){
//     if(n==1) return true;
//     if(arr[n-1]<arr[n-2]){
//         return false;
//     }
//     return isSorted(arr,n-1);
// }

// int main(){
//     vector<int> arr={1,2,3,4,5};
//     int n=arr.size();
//     cout<<isSorted(arr,n);
//     return 0;
// }

//binary search
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
