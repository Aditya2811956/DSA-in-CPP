#include<iostream>
#include<string>
using namespace std;
bool isValid(char ch){
    if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')){
       return true;
    }
    return false;
}
    int main() {
        string s="A man, a plan, a canal: Panama";
        int start=0,end=s.length()-1;
        bool ch=true;
        while(start<end){
            if(!isValid(s[start])){
                start++;
                continue;
            }
            if(!isValid(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start])!=tolower(s[end])){
               ch=false;
               break;
            }
            start++;
            end--;
        }
        cout<< ch;
    }