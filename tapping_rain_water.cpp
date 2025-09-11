#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=arr.size();
    vector<int> left(n),right(n);
    left[0]=arr[0];
    for(int i=1;i<n;i++){
       left[i] =max(left[i-1],arr[i]);
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
       int y=max(right[i+1],arr[i]);
       right[i]=y;
    }
    int ans=0;
    for(int i=0;i<n;i++){
       ans+=min(left[i],right[i])-arr[i];
    }
    cout<<ans;

    return 0;
}