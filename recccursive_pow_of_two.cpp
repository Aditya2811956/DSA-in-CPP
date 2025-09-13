#include<iostream>
using namespace std;
int pow(int n){
    if(n==0){
        return 1;
    }
    return 2* pow(n-1);
}
int main(){
    int x=pow(3);
    cout<<x;
    return 0;
}