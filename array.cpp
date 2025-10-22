#include<iostream>
using namespace std;
int main(){
	int arr[10],arr2[15],arr1[5]={3,4,3,8,9};
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	for(int i=0;i<10;i++){
    arr2[i]=arr[i];	
	}
	for(int i=0;i<5;i++){
	arr2[10+i]=arr1[i];	
	}
	for(int i=0;i<15;i++){
	cout<<arr2[i]<<" ";
	}
	return 0;
}
