#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
     int m=arr.size();
     int n=arr[0].size();
     int s_row=0;
     int e_row=m-1;
     int s_col=0;
     int e_col=n-1;
     while(s_row<=e_row && s_col<=e_col){


        for(int i=s_col;i<=e_col;i++){
            cout<<arr[s_row][i]<<" ";
        }

        s_row++;


        for(int i=s_row;i<=e_row;i++){
            cout<<arr[i][e_col]<<" ";
        }

        e_col--;

        if(s_row <= e_row){
        for(int i=e_col;i>=s_col;i--){
            cout<<arr[e_row][i]<<" ";
        }
        }  

        e_row--; 
        if(s_col<=e_col){
        for(int i=e_row;i>=s_row;i--){
            cout<<arr[i][s_col]<<" ";
        }
        }
        s_col++;
     }
     
    return 0;
}