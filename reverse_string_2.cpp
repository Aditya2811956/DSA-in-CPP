#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr="abcdefg";
    int k=2;
            int n=arr.length() ;
    for(int i=0;i<n;i+=2*k){
        int start=i,end=min(i+k-1,n-1);
            while(start<end){
               swap(arr[start],arr[end]);
               start++;
               end--;
            }
    }   
       for(int i=0;i<arr.length();i++){
        cout<<arr[i]<<" ";
    }     
        return 0; 
}
