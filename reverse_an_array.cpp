//reverse an arry
#include<iostream>
using namespace std;
void reverse(int arr[], int sz){ //void function is used while modifying an array 
	int start=0;
	int end=sz-1;
	int temp=0;
	while(start<=end){
	    temp=arr[start];
	    arr[start]=arr[end];
	    arr[end]=temp;
	    start++;
	    end--;
	}
}
int main(){//its much professional to make an other function other than main function
	int arr[]={11,22,33,44,55};
	int sz=5;
	reverse(arr,sz);//you are taking an array so never store it in an variable
	for(int i=0;i<sz;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
