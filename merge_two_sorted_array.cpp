#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a={1,2,3};
    vector<int> b={3,4,5};
    vector<int> arr;
    int m=a.size();
    int n=b.size();
    int x=m+n;
    for(int i=0;i<x;i++){
        if(i<m){
            arr.push_back(a[i]);
        }
        else{
            arr.push_back(b[i-m]);
        }
    }
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    } 
    for(int i=0;i<x;i++){
        cout<<arr[i];
    }
    return 0;
}