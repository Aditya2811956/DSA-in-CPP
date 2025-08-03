#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="hollywood";
    int start=0,end=str.length()-1,i=0;
    while(start<=end){
        i=str[start];//can also use swap function swap(str[start],str[end])
        str[start]=str[end];
        str[end]=i;
        start++;
        end--;
    }
    for(char j:str){
        cout<<j;
    }
    return 0;
}