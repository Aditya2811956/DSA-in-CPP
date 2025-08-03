#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> arr={2,7,9,11};
	vector<int> a={};
	int n=arr.size();
	int target=9;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int x=arr[i]+arr[j];
			if(x==target){
			   a.push_back(arr[i]);//use arr[i]&arr[j] to get values that make 9
			   a.push_back(arr[j]);	//use(i)&(j) to get index where the values sum gives 9
			}
		}
	}
	for(int i : a){
		cout<<i<<" ";
	} 
	return 0;
}
