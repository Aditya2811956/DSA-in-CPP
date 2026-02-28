#include<iostream>
using namespace std;
int main(){
    int n=3;
    int count=0;
    while(n!=0){
        n=n & n-1;
        count++;
    }
    cout<<count;
    return 0;
}