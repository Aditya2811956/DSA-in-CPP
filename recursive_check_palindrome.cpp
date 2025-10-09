#include<iostream>
#include<string>
using namespace std;
bool reverse(string s,int st,int end){
    if(st>end){
        return true;
    }
    if(s[st]!=s[end]){
        return false;
    }
    return reverse(s, st+1,end-1);
}
int main(){
    string s="sagar";
    int end=s.length()-1;
    cout<<reverse(s,0,end);
    return 0;
}