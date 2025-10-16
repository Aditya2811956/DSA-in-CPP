#include<iostream>
#include<vector>
using namespace std;

void ps(vector<int> arr,vector<int>ans,int n,vector<vector<int>>&final){
       if(n==arr.size()){
        final.push_back(ans);
        return;
       }

       //pick
       ans.push_back(arr[n]);
       ps(arr,ans,n+1,final);
       
       //not pick
       ans.pop_back();  
       ps(arr,ans,n+1,final);
       

}

int main(){
    vector<int> arr={1,2,3,};
    vector<int> ans;
    vector<vector<int>> final;
     ps(arr,ans,0,final);
     for(auto i:  final){
        for(auto x:i){
            cout<<x<<" ";
        }
        cout<<endl;
     }
    return 0;
}