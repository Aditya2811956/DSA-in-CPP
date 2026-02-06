#include<iostream>
#include<vector>
using namespace std;

//bottom_up
int solve1(vector<int>arr, int n , int i,vector<int> dp){
    if(i>=n){
       return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int x=solve1(arr,n,i+1,dp);
    int y=solve1(arr,n,i+2,dp);
    dp[i]= arr[i]+ min(x,y);
    return dp[i];
}

//Top_down
int solve2(vector<int> arr, int n){
    vector<int>dp(n+1);
    dp[0]=arr[0];
    dp[1]=arr[1];
    for(int i=2;i<n;i++){
        dp[i]=arr[i]+ min(dp[i-1],dp[i-2]);
    }
    return min(dp[n-1],dp[n-2]);
}

//space optimization
int solve3(vector<int> arr, int n){//dp vector not used 
    vector<int>dp(n+1);
    int prev2=arr[0];
    int prev1=arr[1];
    for(int i=2;i<n;i++){
        int curr=arr[i]+ min(prev1,prev2);
        prev2=prev1;
        prev1=curr;
    }
    return min(prev1,prev2);
}


int main(){
     vector<int> arr={10,15,20};
     int n=arr.size();
     vector<int> dp(n+1,-1);
     int x=min(solve1(arr,n,0,dp),solve1(arr,n,1,dp));
     int ans=  solve2(arr,n);
     int a=  solve3(arr,n);
     cout<<x<<endl;
     cout<<ans<<endl;
     cout<<a<<endl;
    return 0;
}