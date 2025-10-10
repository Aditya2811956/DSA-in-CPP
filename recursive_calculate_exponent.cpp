#include<iostream>
using namespace std;
int pow(int num,int po,int ans){
    if(po==0){
        return ans;
    }
    ans=ans*num;
    return pow(num,po-1,ans);
}
int main(){
        int num=9;
        int po=3;
        int ans=1;
        cout<<pow( num, po, ans);
    return 0;
}