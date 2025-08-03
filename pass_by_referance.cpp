//pass by referance by pointers
// #include<iostream>
// using namespace std;
// void changeA(int * ptr){
//     *ptr=20;
// }
// int main(){
//     int a=10;
//     changeA(&a);
//     cout<<"changed valur of a in main function : "<<a<<endl;
//     return 0;
// }

//pass by referance by alias
#include<iostream>
using namespace std;
void changeA(int &b){//& is symbol of alias that means directly using a by a new name b
    b=20;
}
int main(){
    int a=10;
    changeA(a);
    cout<<"changed valur of a in main function : "<<a<<endl;
    return 0;
}