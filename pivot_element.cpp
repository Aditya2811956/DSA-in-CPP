#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,7,3,6,5,6};
    int n=arr.size();
    int sum=0;
    for(int i:arr){
        sum+=i;
    }
    int left=0;
    int right=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(i>0){
            left+=arr[i-1];
        }
        right=sum-left-arr[i];
        if(left==right){
          ans=arr[i];
          break;
        }
    }
    cout<<ans;

    return 0;
}