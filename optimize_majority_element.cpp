#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> arr={1,2,3,3,3,3,2,3,};
	sort(arr.begin(),arr.end());
	int freq=1;
	int n=arr.size();
	int ans=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]==arr[i-1]){
			freq++;
			
		}
		else{
			freq=1;
			ans=arr[i];
		}
		if(freq>n/2){
			cout<<"majority element= "<<ans<<endl;
		}
	}
	return 0;
}
