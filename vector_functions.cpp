#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v1={1,2,3,4,5};
	cout<<"size = "<<v1.size()<<endl; //size function = vector name.size()
	
	v1.push_back(5);//function that push value at the end of a vector= vector name.push_back()
	cout<<"size after pushing= "<<v1.size()<<endl;
	for(int i : v1){
		cout<<i<<endl;
	}
	
	v1.pop_back();//function for deleting an element at the last no need to write any elemrnt in between the()
	cout<<"size after poping = "<<v1.size()<<endl;
	for(int i : v1){
		cout<<i<<endl;
	}
	
	cout<<v1.front()<<endl;//function for printing the first value of vector
	
	cout<<v1.back()<<endl;//function for printing the last value of vector
	
	cout<<v1.at(3)<<endl;//function for printing value at an index
	return 0;
}
