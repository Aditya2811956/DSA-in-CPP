#include<iostream>
using namespace std;
void home(int st, int dest){
    cout<<" current location "<<st<<" final destination "<<dest;
    cout<<endl;
    if(st==dest){
        cout<<" pohch gya";
        return;
    }
    home(st+1,dest);
}
int main(){
    int st=1;
    int dest=10;
    home(st,dest);
    return 0;
}
