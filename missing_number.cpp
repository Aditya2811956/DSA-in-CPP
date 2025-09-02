#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={3,0,1};
    int n=arr.size();
      int sum=0;
      int total=0;
      for(int i=0;i<n;i++){
          sum+=arr[i];
      }
      for(int i=0;i<=n;i++){
          total+=i;
      }
      int x=total-sum;
      cout<<x;
    return 0;
}