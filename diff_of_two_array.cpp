//this code is used to find difference between 2 array 
//this code eleminates all the common elements from a and b and just print 2 d array with a & b without common elements
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    vector<int> nums1={1,2,3,3};
    vector<int> nums2={1,1,2,2};
    unordered_set<int> a (nums1.begin(),nums1.end());
    unordered_set<int> b (nums2.begin(),nums2.end());
    vector<int> arr1;
    vector<int> arr2;
    vector<vector<int>> arr;
    for(int i:a){
        if(b.find(i)==b.end()){
            arr1.push_back(i);
        }
    }
    for(int i:b){
        if(a.find(i)==a.end()){
            arr2.push_back(i);
        }
    }
    arr.push_back(arr1);
    arr.push_back(arr2);
    for(auto i:arr){
        for(auto j:i){
            cout<<j<<" ";
        }
    }

    return 0;
}