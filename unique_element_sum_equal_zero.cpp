#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=5;
    vector<int> arr;
        for(int i=1; i<=n/2; i++){
            arr.push_back(i);
            arr.push_back(-i);
        }
        if(n % 2 != 0){
            arr.push_back(0); 
        }
        for(int i:arr){
            cout<<i<<" ";
        }
    return 0;
}
