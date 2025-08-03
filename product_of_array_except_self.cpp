#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector <int> arr={1,2,3,4};
     int n=arr.size();
     vector<int> arr1(n);
    for(int i=0;i<n;i++){
        int x=1;
        for(int j=0;j<n;j++){
            if(j==i){
                continue;
            }
            x=x*arr[j];
        }
        arr1[i]=x;
    }
    for(int i : arr1){
        cout<<i<<" ";
    }
    return 0;
}