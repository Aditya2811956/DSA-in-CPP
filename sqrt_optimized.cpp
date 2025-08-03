#include<iostream>
using namespace std;
int main(){
    int x=7;
        if(x==0)return 0;
        int start=1,end=x;
        int ans=0;
        while(start<=end) {
            long mid=start+(end-start)/2;
            if (mid*mid <= x) {
               ans=mid;
               start=mid+1;
            }
            else {
                end=mid-1;
            }
    return -1;
} 