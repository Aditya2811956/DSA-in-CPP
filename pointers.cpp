#include<iostream>
using namespace std;
int main(){
    float a=3.5;
    float * ptr=&a;
    cout<<ptr<<endl;//print ptr that holds address of a
    cout<<&a<<endl;//address of a
    float** ptr2=&ptr;//need double * for storing value of pointer in other pointer
    cout<<ptr2<<endl;
    cout<<*(&a)<<endl;//value of a
    int * ptr3= NULL;//creating an null pointer
    cout<<&ptr3<<endl;
    return 0;
}