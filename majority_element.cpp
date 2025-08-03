#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> arr={1,1,2,2,1};
	int n=arr.size();
	for(int val:arr){
		int freq=0;
		for(int num:arr){
			if(num==val){
				freq++;
			}
		}
		if(freq>n/2){
			cout<<"Majority Element = "<<val<<endl;
			break;
		}
	}
	return 0;
}
