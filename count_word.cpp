#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s=" My name   is Aditya ";
    int n=s.length();
    vector<string> arr;
    string c="";
    for(int i=0;i<n;i++){
          if(s[i] != ' '){
              c+=s[i];
          }
          else{
            if(!c.empty()){
                arr.push_back(c);
            }
            c="";
          }
    }
    if(!c.empty()){
        arr.push_back(c);
    }
    int x=arr.size();
    cout<<x;

    return 0;
}