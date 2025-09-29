#include<iostream>
#include<vector>
using namespace std;
bool sort(vector<int> arr,int n){
     if(arr[n]<arr[n-1]){
        return false;
     }
     if(n==1){
        return true;
     }
     return sort(arr,n-1);
}
int main(){
    vector<int> arr={1,32,4,5,6,7,8,9};
    int n=arr.size();
    cout<<sort(arr,n);
    return 0;
}