#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std;
// bool comparator(pair<int,int> p1,pair<int,int> p2){
//     if(p1.second < p2.second) return true;
//     if(p1.second > p2.second) return false;

//     if(p1.first>p2.first) return true;
//     else return false;
// }
int main(){
    //ALL ABOUT VECTOR


    // vector<int> arr={1,2,3,4,5};
    // arr.erase(arr.begin()); this is used for erasing particular element in this case we removed first element or array

    //  arr.erase(arr.begin()+2); here we removed element at 3rd position

    // arr.erase(arr.begin ()+ 1,arr.begin()+3); here we are deleting a range of elements

    // arr.insert(arr.begin()+2,100); inserting value of 100 at 3rd position

    // arr.clear();remove all elements from array
      
    // vector<int>::iterator it;   now this is used to normally traverse the loop but it is usefulfor using the direct memory location
    // for( it=arr.begin();it!=arr.end();it++){
    //     cout<<*(it)<<endl;
    // }
     
    //  vector<int>::reverse_iterator it;  now this is used to normally reverse traverse the loop but it is usefulfor using the direct memory location 
    // for( it=arr.rbegin();it!=arr.rend();it++){
    //     cout<<*(it)<<endl;
    // }
    // for(int i:arr){
    //     cout<<i<<" ";
    // }



    //ALL ABOUT LIST
    // list<int> i={1,2,3};
    // i.push_back(4);//pushing values from back
    // i.push_back(5);
    // i.push_front(0);//pushing valuse from front
    // i.push_front(-1);
    // i.pop_back(); deleting value from back
    // i.pop_back();
    // for(int val:i){
    //     cout<<val<<" ";
    // }




    //ALL ABOUT DEQUE
    // deque<int> d={1,2,3};
    // cout<<d[2];// only difference between list and deque is deque can print a single element llike this (random access possible )



    //ALL ABOUT STACK
    // stack<int> s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // stack<int> s1;
    // s.swap(s1);//by this the elements of s reaches s1 and s becomes empty
    // cout<<"size of s= "<<s.size()<<endl;
    // cout<<" size of s1 = "<<s1.size()<<endl;
    // s.pop();
    // s.pop();
    // cout<<"top= "<<s.top()<<endl;
    // while(!s.empty()){//loop used to print elements of stack (runs till stack becomes empty)
    //     cout<<s.top()<<endl;//return 3 2 1
    //     s.pop();
    // }


    //ALL ABOUT QUEUE 
    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // while(!q.empty()){//return 1 2 3 
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }


    //ALL ABOUT PRIORITY QUEEUE
    // priority_queue<int> q;// WORKS AS MAX AND MIN HEAP IN BINARY TREES
    // priority_queue<int , vector<int>, greater<int>> q; //by this return  1 3 10 20 
    // q.push(3);
    // q.push(20);
    // q.push(10);
    // q.push(1);
    
    // while(!q.empty()){//return 20 10 3 1 (sorted manner return )
    //     cout<<q.top()<<" ";
    //     q.pop();
    // }



    //ALL ABOUT MAPS
    // map<string,int> m;
    // m["tv"]=100;
    // m["headphones"]=20;
    // m["laptop"]=300;
    // m.insert({"camera",200});
    // m.erase("tv");//delete a value and key in map
    // for(auto i:m){//return values and keys in sorted string manner
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // // cout<<"no. of times laptop is present in map= " <<m.count("laptop")<<endl;
    // // cout<<m["laptop"]<<endl;//print value in laptop
    // if(m.find("camera")!=m.end()){//to check if element present in map
    //     cout<<"element found "<<endl;
    // }
    // else{
    //     cout<<"element not found "<<endl;
    // }


    //ALL ABOUT UNORDERED MAP
    // unordered_map<string,int> m;
    // m["tv"]=100;
    // m["headphones"]=20;
    // m["laptop"]=300;
    // for(auto i:m){//gives answer in random manner not in sorted one
    //     cout<<i.first<<" "<<i.second<<endl;
    // }


    //ALL ABOUT SETS
    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // for(auto i:s){
    //     cout<<i<<endl;
    // }

    //SORTING
    // vector <pair<int,int>> arr={{1,2},{78,33},{29,22}};
    // sort(arr,arr + 5);//for array
    // sort(arr.begin(),arr.end());//for increasing order 
    // sort(arr.begin(),arr.end(),greater<int>());//for descending order 
    //  sort(arr.begin(),arr.end(),comparator);   //comparator function used to compare values from second (values) rather than key 

    // for(auto p:arr){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }


    //reverse
    vector<int> arr={1,2,3,4,5,};
    reverse(arr.begin(),arr.end());
    for(int i:arr){
        cout<<i<<endl;
    }



    // return 0;
}