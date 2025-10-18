#include<iostream>
#include<string>
#include<vector>
using namespace std;
void solve(string num,string ans,vector<string>& arr,string map[],int n){
          if(n==num.length()){
            arr.push_back(ans);
            return;
          }
          int number=num[n]-'0';
          string value=map[number];
          for(int i=0;i<value.length();i++){
            ans.push_back(value[i]);
            solve(num, ans, arr, map,n+1);
            ans.pop_back();
          }


}
int main(){
    string num="23";
    string ans="";
    vector<string> arr;
    string map[10]={" ", " ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(num, ans, arr, map,0);
    for(string i:arr){
        cout<<i<<" ";
    }
    return 0;
}