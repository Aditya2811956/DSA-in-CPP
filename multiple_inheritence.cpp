#include <iostream>
using namespace std;

class A {
public:
    void isA() {
        cout << "tThis is class A" << endl;
    }
};

class B {
public:
    void isB() {
        cout << "This is class B" << endl;
    }
};

class C : public A, public B { 

};

int main() {
    C obj;
    obj.isA();
    obj.isB();
    return 0;
}
