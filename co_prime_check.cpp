#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    int n=7;
    int arr[n]={1,3,6,2,9,6,35};
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(arr[i],arr[j])==1){
                count++;
            }
        }
    }
    cout<<count;
    
    return 0;
}