#include<iostream>
using namespace std;
void count(int n){
    if(n==0){
        return;
    }
    count(n-1);
    cout<<n<<" ";
}
int main(){
    count(10);
   return 0;
}