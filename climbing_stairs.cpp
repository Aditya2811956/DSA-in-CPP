#include<iostream>
#include<vector>
using namespace std;

int climb(int n, vector<int> dp ){
    if(n==0 ){
        return 1;
    }
    if(n<0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]= climb(n-1,dp)+climb(n-2,dp);
    return dp[n];
}
int main(){
    int n=3;
    vector<int> dp (n+1);
    for(int i=0;i<=n;i++){
        dp[i]= -1;
    }
    int x=climb(n,dp);
    cout<<x;
    return 0;
}