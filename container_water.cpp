#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> arr={1,8,6,2,5,4,8,3,7};
    int n=arr.size();
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int x= j-i;
            int y=min(arr[i],arr[j]);
            int z=x*y;
            ans=max(ans,z);
        }
    }
    cout<<ans;
    return 0;
}