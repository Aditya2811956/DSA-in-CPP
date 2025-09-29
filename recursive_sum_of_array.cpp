#include<iostream>
#include<vector>
using namespace std;
int sum(vector <int> arr,int n,int ans){
        if(n==0){
            return ans;    
        }
        ans+=arr[n-1];
        return sum(arr,n-1,ans);

}
int main(){
       vector<int> arr={2,3,2,7,4,1};
       int n=arr.size();
       int ans=0;
       cout<<sum(arr,n,ans);
    return 0;
}