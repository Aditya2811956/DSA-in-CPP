#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
int main(){
    vector<int> arr={9,4,20,3,10,5};
    int k=33;
    int n=arr.size();
    vector<int> ps(n,0);
    int count=0;
    ps[0]=arr[0];
    for(int i=1;i<n;i++){
       ps[i]=ps[i-1]+arr[i];
    }
    unordered_map <int,int>m;
    for(int j=0;j<n;j++){
        if(ps[j]==k){
            count++;
        }
        int val=ps[j]-k;
        if(m.find(val)!=m.end()){
            count+=m[val];
        }
        if(m.find(ps[j])==m.end()){
            m[ps[j]]=0;
        }
        m[ps[j]]++;
    }
    cout<<count;

    return 0;
}