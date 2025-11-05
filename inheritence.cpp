#include<iostream>
#include<string>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;
    int getheight(){
        return height;
    }
    int getweight(){
        return weight;
    }
    int getage(){
        return age;
    }
};

class Male : public Human{// this is the way to inheri a parent (class into a child class class then name of child class then access modifier and then parent class name )
    public:
    string colour;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
};

int main(){
    Male a;
    cout<<a.getheight()<<endl;
    cout<<a.getweight()<<endl;
    cout<<a.getage()<<endl;
    a.sleep();
    return 0;
}