#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string> arr={"alloc","alarm","aloud"};
    string a="";
    for(int i=0;i<arr[0].size();i++){
       char c=arr[0][i];// take the characters one by one from the 0 index element and compare with other characters of other elements
       for(int j=1;j<arr.size();j++){
           if(i>arr[j].size() || arr[j][i]!=c){
              cout << a; //checking conditions for i one for shortest size element and other for not equal to character of first element
                return 0;
           }
       }
       a+=c;
    }
    cout<<a;
    return  0;
}