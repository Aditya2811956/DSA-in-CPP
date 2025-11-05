#include<iostream>
#include<vector>
using namespace std;
//private access only under the class 
// class hero {
//     public:
//     char name[100];
//     int health;
//     char level;
// };  


//if a person have to access private instruments 
class hero {// isme encapsulation ho rhi hai kyuki isme function aur data dono hai  
    private :
    char *name;
    int health;
    char level;
    public:
    static int a;//used to make for something of higher level
    static int random(){//static variable ke liye static function hi bnega aur 
        return a;
    }



   // to access we neeed to create a function inside the function to call it to change value and print output 
    public:
    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void hth(int a){
        health=a;
    }

    void lvl(char b){
        level=b;
    }
}; 

int hero :: a=10;
int main(){

    //hero h1=hero h2; this is a way to store alal value of h1 to h2
    cout<<hero :: random()<<endl;

     hero h1;
     h1.hth(70);
     h1.lvl('A');
      hero h2(h1);// copy constructor - means a new h2 is made which have a copy of h1 and behaves like h1  
     cout<<h2.getlevel()<<endl;
     cout<<h2.gethealth()<<endl;
     cout<<h1.getlevel()<<endl;
     cout<<h1.gethealth()<<endl;
    // cout<<sizeof(h1)<<endl;//108
    // h1.health=70;
    // h1.level='B';
    // cout<<"health is "<<h1.health<<endl;
    // cout<<"level is "<<h1.level<<endl;

    return 0;
}