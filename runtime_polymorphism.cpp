#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog : public Animal{
      public://implementation of own function work here so barking is printed
      //priority to the self function is given rather than the parent function 
      void speak(){
        cout<<"barking"<<endl;
      }
};
int main(){
    Dog a;
    a.speak();
    return 0;

}