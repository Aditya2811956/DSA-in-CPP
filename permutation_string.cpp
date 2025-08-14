#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    int freq1[26]={0};
    string s1="bd";
    string s2="eidbaooo";
    int n2=s2.length();
    int n1=s1.length();
    for(int i=0;i<n1;i++){
        freq1[s1[i]-'a']++;
    }

    bool c=0;
    for(int i=0;i<n2;i++){ // SLIDING WINDOW OPERATION
        int idx=i;
        int freq2[26]={0};
        int widx=0;
        while(widx<n1 && idx<n2){
            freq2[s2[idx]-'a']++;
            idx++;
            widx++;
        }
        bool match=true;
         for(int j=0;j<26;j++){
            if(freq1[j]!=freq2[j]){
                match=false;
                break;
            }
        }   
            if(match){
                c=1;
                break;
            }


    }
    cout<<c;    
    
    return 0;
}