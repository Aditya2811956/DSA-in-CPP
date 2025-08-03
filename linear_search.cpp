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