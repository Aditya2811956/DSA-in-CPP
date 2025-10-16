#include<iostream>
#include<string>
using namespace std;
void subsequence(string s, string ans,int n){
    if(n==s.length()){
        for(int i=0;i<ans.length();i++){
            cout<<ans[i];
        }
        cout<<endl;
        return;
    }
 
    //pick
    ans.push_back(s[n]);
    subsequence(s,ans,n+1);

    //not pick
    ans.pop_back();
    subsequence(s,ans,n+1);

}
int main(){
     string s="abc";
    string ans="";
    subsequence(s,ans,0);
    return 0;
}