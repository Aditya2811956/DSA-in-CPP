#include<iostream>
#include<string>
using namespace std;
string reverse(string s,int st,int end){
    if(st>end){
        return s;
    }
    else{
        int i=s[st];
        s[st]=s[end];
        s[end]=i;
        return reverse(s, st+1,end-1);
    }
}
int main(){
    string s="hello";
    int end=s.length()-1;
     cout<<reverse(s,0,end);
    return 0;
}