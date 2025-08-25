#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={3,1,3,4,2};
    int fast=arr[0];
    int slow=arr[0];
    do{
        slow=arr[slow];
        fast=arr[arr[fast]];
    }while(slow!=fast);
    while(slow!=fast){
        slow=arr[slow];
        fast=arr[fast];
    }
    cout<<slow;
    return 0;
}