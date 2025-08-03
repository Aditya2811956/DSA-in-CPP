#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
    // char str[]={'a','b','c','\0'};//by \0 the whole array is converted to string and we can use string operations on it
    // cout<<str<<endl;//prints abc
    // cout<<strlen(str)<<endl;//prints 3
    // char str[]="hello";//this is called string literals
    // cout<<str<<endl; 



    //INPUTS AND OUTPUTS IN STRINGS
    // char str[12];
    // cout<<"enter the string : ";
    // cin>>str ;//stores only one word
    // cout<<"output : "<<str;

    // cin.getline(str,100);//stores many words in the str
    // cin.getline(str,100,'o');//prints hell while writing hello world as inpuut
    // cout<<"output : "<<str;
    // for(char i:str){
    //     cout<<i<<" ";
    // }



    string str1="hello world ";
    string str2="yo yo";//string is better from character array as is can be dynamically used 
    // cout<<"output "<<str;
    string str3= str1+ str2;//concatenation possible
    // getline(cin,str3);//input multiple lines in c++
    for(int i=0;i<str3.length();i++){
        cout<<str3[i]<<" ";
    }
    // cout<<(str1==str2)<<endl;
    // cout<<"output "<<str3;
    return 0;
}