#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={2,3,4,1,9,6,99};
    int k=3;
    int n=arr.size();
        sort(arr.begin(),arr.end());
        cout<< arr[n-k];
    return 0;
}