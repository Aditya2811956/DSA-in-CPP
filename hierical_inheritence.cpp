#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "This is my parent" << endl;
    }
};

class child1 : public Parent {

};

class child2 : public Parent {

};

int main() {
    child1 c1;
    child2 c2;
    c1.show();
    c2.show();
    return 0;
}
