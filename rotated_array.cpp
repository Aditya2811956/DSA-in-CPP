#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
    vector <int> arr1(n);
    for(int i=0;i<n;i++){
        arr1[(i+3)%n]=arr[i];
        
    }
    for(int num : arr1) {
        cout << num << " ";
    }
    return 0;
}