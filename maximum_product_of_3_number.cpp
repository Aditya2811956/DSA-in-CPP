#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={5,7,-2,-3,1};
    int n=5;
    sort(arr.begin(),arr.end());
    int p1=arr[0]*arr[1]*arr[n-1];
    int p2=arr[n-1]*arr[n-2]*arr[n-3];
    cout<<max(p1,p2);
    return 0;
}