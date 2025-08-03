//DECIMAL TO  BINARY
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main(){
//	int dec,rem;
//	int bin=0;
//	cin>>dec;
//	int a=0;
//	while(dec>0){
//		rem=dec%2;
//		bin=bin+rem*pow(10,a);
//		a++;
//		dec=dec/2;
//		}
//		cout<<bin<<endl;
//	return 0;
//}


//BINARY TO DECIMAL
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int bin,rem,dec;
	cin>>bin;
	int a=0;
	while(bin>0){
		rem=bin%10;
		dec=dec+rem*pow(2,a);
		a++;
		bin=bin/10;
	}
	cout<<dec<<endl;
	return 0;
}
