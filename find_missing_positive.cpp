#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={3,4,-1,1};
    int n=arr.size();
        for(int i=0;i<n;i++){
            while(arr[i]>0 && arr[i]<=n && arr[arr[i]-1]!= arr[i]){//check for third condition
                  swap(arr[i],arr[arr[i]-1]);
            }
        }int count =0;
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1){
                count=i+1;
                break;
            }
        }
        if(count==0){
           cout<<n+1; 
        }
        else{
            cout<<count;
        }
    return 0;
}