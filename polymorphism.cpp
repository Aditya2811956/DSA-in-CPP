#include<iostream>
using namespace std;
class A{//after having same name of function they can be accessed by changing the parameters both have same name one have int n and other didn't 
    public:
     int sayHello(int n){
        cout<<"Hello aditya bhai"<<endl;
        return 1;
     }
     void sayHello(){
        cout<<"Hello aditya bhai"<<endl;
     }
};
class B{
   public:
   int a;
   int b;
   int add(){
      return a+b;
   }

   void operator + (B &obj){//this is the way to operator overloading 
      int value1= this->a; //noe where ever + comes it now bwcomes -
      int value2=obj.a;
      cout<<"result- "<<value2-value1<<endl;

   }
};


int main(){
    A adi;
    adi.sayHello();
    
    B obj1 , obj2;
    obj1.a=4;
    obj2.a=7;

    obj1 + obj2;

    return 0;
}