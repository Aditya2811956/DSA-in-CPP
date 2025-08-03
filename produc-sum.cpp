#include<iostream>
using namespace std;
int main(){
	int n,i,j,l,k,result,sum=0,product=1;
	cin>>n;
	i=n;
	l=n;
	while(i!=0){
		j=i%10;
		sum=sum+j;
		i=i/10;
	}
	while(l!=0){
		k=l%10;
		product=product*k;
		l=l/10;
	}
	result=product-sum;
	cout<<result;
	return 0;
	
}
