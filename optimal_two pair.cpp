#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> arr={2,7,11,15};
	vector<int>a={};
	int target=26;
	int n=arr.size();
	int i=0; int j=n-1;
	while(i<j){//one loop so less time complexicity
		int sum=arr[i]+arr[j];
		if(sum>target){
			j--;
		}
		else if(sum<target){
			i++;
		}
		else{
			a.push_back(i);
			a.push_back(j);
			break ;
		}
	}
	int m=a.size();
	for(int k=0;k<m;k++){
		cout<<a[k]<<' ';
	}
	return 0;
}
