#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<vector<int>> arr={{1,2},{2,3},{3,4},{1,3}};
    sort(arr.begin(),arr.end());
        int i=0,j=1;
        int n=arr.size();
        int count=0;
        while(j<n){
             if(arr[i][1]<=arr[j][0]){
                i=j;
                j++;
             }
             else if(arr[i][1]>=arr[j][1]){
                i=j;
                j++;
                count++;
             }
             else if(arr[i][1]<arr[j][1]){
                j++;
                count++;
             }
        }
        cout<<count;
    return 0;
}