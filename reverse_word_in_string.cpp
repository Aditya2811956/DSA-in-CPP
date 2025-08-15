#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
vector <string> is_word(string s){
    int n=s.length();
    vector<string> words={};
     string word=" ";
    
  for(int i =0;i<n;i++){
    if(s[i]!=' '){
       word += s[i];
    }
    else{
        words.push_back(word);
        word=" ";
    }

  }
  if(!word.empty()){
      words.push_back(word);
  }
  return words;
}
string reverse(string s){
        vector<string> arr=is_word(s);
        reverse(arr.begin(),arr.end());
        string x=" ";
        for(string i : arr){
            x+=i;
        }
    return x;
}

int main() {
    string s="legend its aditya";

    cout<<reverse(s);


    return 0;
}