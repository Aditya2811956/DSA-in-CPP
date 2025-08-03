#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector <int> arr={7,1,5,3,6,4};
    int n=arr.size();
    int min=arr[0];
    int max_profit=0;
    for(int i=0;i<n;i++){ //O(n)
        if(min>arr[i]){
            min=arr[i];
        }
        else{
            max_profit=max(max_profit,arr[i]-min);
        }
    }
    cout<<max_profit;
    return 0;
}