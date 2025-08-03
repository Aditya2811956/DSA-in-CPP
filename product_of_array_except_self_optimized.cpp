#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector <int> arr={1,2,3,4};
     int n=arr.size();
     vector<int> prefix(n,1);
     vector<int> postfix(n,1);
    for(int i=1;i<n;i++){
        postfix[i]=postfix[i-1]*arr[i-1];
    }   
    for(int j=n-2;j>=0;j--){
        prefix[j]=prefix[j+1]*arr[j+1];
    }
    for(int k=0;k<n;k++){
        arr[k]=prefix[k]*postfix[k];
        cout<<arr[k]<<" ";
    }
    return 0;
}