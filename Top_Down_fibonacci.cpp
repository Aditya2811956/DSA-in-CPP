// Top-down=recursion + memoization(stores the value of sub-problems in map/table ) 

#include<iostream>
#include<vector>
using namespace std;
int fib(int n,vector<int>& dp){
    if(n==1 || n==0){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=fib(n-1,dp)+fib(n-2,dp);
    return  dp[n];
}
int main(){
    int n=8;
    vector<int> dp(n+1);
    for(int i=0;i<=n;i++){
        dp[i]=-1;
    }
    int x=fib(n,dp);
    cout<<x;
    return 0;
}