#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v1(5,1);//1st way to initialize vector
	vector<int> v2={1,2,3,4,5}; //2nd way for vector initialization
	for(int i : v1){ //loop to print vector here i stores values rather than index as we do in array
		cout<<i<<endl; 
	}
	for(int i : v2){
		cout<<i<<endl;
	}
	return 0;
}
