#include<iostream>
using namespace std;
class A{
    public:
    fun(){
        cout<<"this is class A";
    }
};
class B{
    public:
    fun(){
        cout<<"this is class B";
    }
};
class  C: public A , public B{

};

int main(){
    C yes;// to remove confusion between which fun is this we use ambiguity (name of variable of class . which function to call:: then function)
    yes.A::fun();
}