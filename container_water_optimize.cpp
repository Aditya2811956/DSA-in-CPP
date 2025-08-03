#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> arr={1,8,6,2,5,4,8,3,7};
    int n=arr.size();
    int lp=0;
    int rp=n-1;
    int ans=0;
    while(lp<rp){
        int wd=rp-lp;
        int ht=min(arr[lp],arr[rp]);
        int z=wd*ht;
        ans=max(ans,z);
        if(arr[lp]>arr[rp]){
            rp--;
        }
        else{
            lp++;
        }
    }
    cout<<ans;
    return 0;
}