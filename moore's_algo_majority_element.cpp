#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> arr={1,2,2,3,3,3,3,3,};
	int freq=0,ans=arr[0];
	int n=arr.size();
	for(int i=0;i<n;i++){
		if(freq<=0){
			ans=arr[i];
		}
		if(arr[i]==ans){
			freq++;
		}
		else{
			freq--;
		}
	}
	cout<<ans<<endl;
	return 0;
}
