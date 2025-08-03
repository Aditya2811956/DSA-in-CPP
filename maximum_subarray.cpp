//code for printing all subarray possibe for an array
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[]={1,2,3,4,5};
//	int size=5;
//	for(int start=0;start<size;start++){
//		for(int end=start;end<size;end++){
//			for(int i=start;i<=end;i++){
//				cout<<arr[i];
//			}
//			cout<<' ';
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//code for maximum subarray in a array
#include<iostream>
#include<climits>
using namespace std;
int main(){
	int arr[]={3,-4,5,4,-1,7,-8};
	int size=7;
	int max_num= INT_MIN;
	for(int start=0;start<size;start++){
		int current_sum=0;
		for(int end=start;end<size;end++){
			current_sum+=arr[end];
			max_num=max(max_num,current_sum);
		}
	}
	cout<<max_num<<endl;
	return 0;
}
