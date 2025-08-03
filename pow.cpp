#include<iostream>
using namespace std;
int main(){
    long long pow=-2;
    double num=2;
    long binform=pow;
    if(pow<0){
        binform=-binform;
        num=1/num;
    }
    double ans=1;
    while(binform>0){
          if(binform % 2 == 1 ){
          ans*=num;
          } 
          num*=num;
          binform/=2;
    }
    cout<<ans;
    return 0;
}