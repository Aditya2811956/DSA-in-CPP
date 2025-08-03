//linear seaech
#include<iostream>
using namespace std;
int main(){
	int arr[]={51,-15,-12,55,1};
	int size=5;
	int search;
	cin>>search;
	for(int i=0;i<5;i++){
		if(arr[i]==search){
			int count=i+1;
			cout<<"found at location- "<<count;
		}
	}
	return 0;
}
//bubble sort
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
