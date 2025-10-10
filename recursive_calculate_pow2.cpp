#include<iostream>
using namespace std;
int pow(int num,int po){
    if(po==0){
        return 1;
    }
    if(po%2==0){
        return pow( num, po/2)*pow( num, po/2); 
    }
    if(po%2==1){
        return num*pow( num, po/2)*pow( num, po/2); 
    }
}
int main(){
    int num=4;
    int po=3;
    int ans=pow(num,po);
    cout<<ans;
    return 0;
}