#include<iostream>
using namespace std;

void say_num(int n,string arr[]){
        //base case
        if(n==0)
           return;
        //processing
        int digit=n%10;
        n/=10;
        
        say_num( n, arr);

        cout<<arr[digit]<<" ";
        
}

int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n=452;
    cout<<endl;
    say_num(n ,  arr );
    return 0;
}