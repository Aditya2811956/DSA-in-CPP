#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int max_no= max(a,b);
	while(max_no%a!=0 || max_no%b!=0){
		max_no++;
	}
	cout<<max_no<<endl;
	return 0;
}


//updated version only
//#include<iostream>
//#include<numeric>
//using namespace std;
//int main(){
//	int a,b;
//	cin>>a>>b;
//	int c=lcm(a,b);
//	cout<<"lcm of "<<a<<"and"<<b<<"is"<<c<<endl;
//	return 0;
//}
