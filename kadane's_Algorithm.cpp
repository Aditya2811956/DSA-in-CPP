#include<iostream>
#include<climits>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5};
	int max_sum=INT_MIN;
	int current_sum=0;
	int size=5;
	for(int i=0;i<size;i++){
		current_sum+=arr[i];
		max_sum=max(current_sum,max_sum);
		if(current_sum<0){
			current_sum=0;
		}
	}
	cout<<max_sum<<endl;
	return 0;
}
// benefit of kadane algorithm is its time complexity is O(n) 
