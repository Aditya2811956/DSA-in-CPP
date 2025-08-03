#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={7,1,5,3,6,4};
    int n=arr.size();
    int max_profit=0;
    for(int i=0;i<n;i++){//O(n^2)
        for(int j=i+1;j<n;j++){
            max_profit= max(max_profit,arr[j]-arr[i]);
        }
    }
    cout<<max_profit;
    return 0;
}