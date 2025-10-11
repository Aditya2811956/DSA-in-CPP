#include<iostream>
using namespace std;
void bubble(int arr[],int size){
    if(size==0 || size==1){
        return;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble(arr,size-1);
}

int main(){
    int arr[5]={15,2,5,1,0};
    bubble(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}