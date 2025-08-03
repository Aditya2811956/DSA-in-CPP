#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
     string s="daabcbaabcbc";
     string part="abc";
     while(s.length()-1>0 && s.find(part)<s.length()-1){
          s.erase(s.find(part),part.length());
     }
     cout<<s;

}
