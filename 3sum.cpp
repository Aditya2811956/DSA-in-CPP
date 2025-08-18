#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={-1,0,1,2,-1,-4};
sort(arr.begin(),arr.end()); 
       int n=arr.size();
       vector<vector<int>>count;
       for(int i =0;i<n;i++){
        if (i > 0 && arr[i] == arr[i - 1]) continue;
           int st=i+1;
           int end=n-1;
           while(st<end){
            int sum=arr[i]+ arr[st]+arr[end];
                if(sum<0){
                    st++;
                }
                else if(sum>0){
                    end--;
                }
                else{
                    count.push_back({arr[i] , arr[st] , arr[end]});
                    while (st < end && arr[st] == arr[st + 1]) st++;
                    while (st < end && arr[end] == arr[end - 1]) end--;
                    st++;
                    end--;
                }
           }
       }
    for(auto i: count){
        for(auto j: i){
            cout<<j<<" ";
        }
    }
    return 0;
}