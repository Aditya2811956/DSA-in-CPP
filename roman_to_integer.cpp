#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
       string s="MCMXCIV";
       unordered_map<char,int>roman_map={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
       };

       int total=0;
       for(int i=0;i<s.length()-1;i++){
        int current_val=roman_map[s[i]];
        int next_val=roman_map[s[i+1]];
         if(current_val>= next_val){
            total+=current_val;
         }
         else{
            total-=current_val;
         }
        }
        total+=roman_map[s.back()];
        cout<<total;
        return 0;
    }
    
