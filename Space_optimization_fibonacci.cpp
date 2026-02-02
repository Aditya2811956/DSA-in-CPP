#include<iostream>
#include<vector>
using namespace std;
int fib(int n){//iss methord me vector hata hi  diya
    if(n==0)return 0;
    int prev1=0;//variable se kaam krdiya 
    int prev2=1;//isse space optimize krdiya 
    int curr=0;
    for(int i=2;i<=n;i++){
        curr=prev1+prev2;
        prev1=prev2;
        prev2=curr;
    }
    return  prev2;//isse 1 wae case ki bhi dikat khatam krdi
}
int main(){
    int n=8;
    int x=fib(n);
    cout<<x;
    return 0;
}