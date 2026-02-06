//bottom_up
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
 solve(vector<int>& arr , int x,vector<int> &dp){
     int n=arr.size();
        if(x==0){
            return 0;
        }
        if(x<0){
            return INT_MAX;
        }
        if(dp[x]!=-1){
            return dp[x];
        }
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int ans= solve(arr, x-arr[i],dp);
            if(ans!=INT_MAX){
                mini=min(mini,1+ans);
            }
        }
        dp[x]=mini;
        return mini;
}
    
int main(){
    vector<int> arr={1,2,5};
    int x=11;
    vector<int> dp(x+1,-1);
    int ans=solve(arr,x,dp);
    if(ans==INT_MAX){
        return -1;  
    }
    cout<< ans;
    return 0;
}