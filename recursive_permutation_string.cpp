#include<iostream>
#include<vector>
#include<string>
using namespace std;
void permutation(string str,int i,vector<string> &arr){
    //base case
    if(i==str.length()){
        arr.push_back(str);
       return;
    }
    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        permutation(str,i+1,arr);
        swap(str[i],str[j]);
    }
}
int main(){
    string str="abc";
    vector<string>arr;
    permutation(str,0,arr);
    for(string i:arr){
        cout<<i<<" ";
    }
    return 0;
}