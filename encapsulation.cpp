#include<iostream>
using namespace std;
class a{// proper function as encapsulation due to both function and data are present in the class
    private:
    int data;
    char level;
    
    public:
    int getdata(){
        return data;
    }
    char getlevel(){
        return level;
    }
    void setdata(int data){
        this->data=data;
    }
    void setlevel(char level){
        this->level=level;
    }
};
int main(){
    a a1;
    a1.setdata(70);
    a1.setlevel('A');
    cout<<a1.getdata()<<endl;
    cout<<a1.getlevel()<<endl;
    return 0;
}