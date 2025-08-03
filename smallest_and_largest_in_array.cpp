//#include<iostream>
//using namespace std;
//int main(){
//	int arr[]={20,-20,66,-51,-55};
//	int size=5;
//	int smallest=INT_MAX;  //INT_MAX means positive infinite
//	for(int i=0;i<size;i++){
//    smallest=min(arr[i],smallest);// can use min function or if here 
//	}
//	cout<<smallest<<endl;
//	return 0;
//}

#include<iostream>
#include<climits>
using namespace std;
int main(){
	int arr[]={10,-52,-55,56,-22};
	int largest=INT_MIN;
	int size=5;
	for(int i=0;i<size;i++){
	if(largest<arr[i]){  //can also use max function for finding max value
		largest=arr[i];
	}
	}
	cout<<largest<<endl;
	return 0;
}
