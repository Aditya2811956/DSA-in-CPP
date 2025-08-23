#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<vector<int>> grid={{1,3},{2,2}};
        vector<int> arr;
        int n=grid.size();
        int x=n*n;
        int freq[x]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                freq[grid[i][j]-1]++;
            }
        }
        int y;
        int z;
        for(int i=0;i<x;i++){
            if(freq[i]==2){
                y=i+1;
            }
            if(freq[i]==0){
                z=i+1;
            }
        }
        arr.push_back(y);
        arr.push_back(z);
        for(int i: arr){
            cout<<i<<endl;
        }

    }