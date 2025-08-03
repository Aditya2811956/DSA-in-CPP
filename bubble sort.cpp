
#include<iostream>
using namespace std;
int main(){
	int arr[]={55,-54,62,-44,10};
	int size=5;
	int temp=0;
	for(int j=0;j<size;j++){
	for(int i=0;i<size-1;i++){
		if(arr[i]>arr[i+1]){
			temp=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=temp;
		}
	}
}
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
	    }
	return 0;
}
