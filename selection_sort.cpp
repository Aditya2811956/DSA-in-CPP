#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={5,4,1,2,3};
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int temp=0;
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
