#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={10,20,30,20,20,50,20};
    int value=20;
    arr.erase(remove(arr.begin(), arr.end(), value), arr.end());
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}