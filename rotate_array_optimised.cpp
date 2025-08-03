#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    int k=3;
    int n=nums.size();
    int start=0;
    int end=n;
    int temp=0;
    while( start<end){
        temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;

    }   
    int s=0;
    int e=k;
    while(s<e){
       temp=nums[s];
       nums[s]=nums[e];
       nums[e]=temp;
       s++;
       e--;
    } 
    int st=k;
    int en=n;
    while(st<en){
       temp=nums[st];
       nums[st]=nums[en];
       nums[en]=temp;
       st++;
       en--; 
    }
    for(int i:nums){
        cout<<i<<" ";
    }
    return 0;
}