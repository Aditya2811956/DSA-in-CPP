//WORKS ON POINTER LOGIC AND RETURN ANSWER 
#include<iostream>
#include<vector>
using namespace std;
int sum(int *arr,int n){
       if(n==1){
        return arr[0];
       }
       int remain=sum(arr+1,n-1);
       int  sum = arr[0] + remain;
       return sum;
}
int main(){
    int arr[5] ={2,3,2,7,5};
    int n=5;
    cout<<sum(arr,n);
    return 0;
}