#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>arr={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=3;
    int n=arr.size();
        int n2=arr[0].size();
        int x=-1;
        for(int i=0;i<n;i++){
            if(arr[i][0]<=target && arr[i][n2-1]>=target){
                x=i;
                break;
            }
        }
        if(x == -1) {
        cout << "false";
        return 0;
    }
        int st=0;
        int end=n2-1;
        bool c=false;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(arr[x][mid]==target){
                c=true;
                break;
            }
            else if(arr[x][mid]>target){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        cout<<c;
        return 0;
    
}