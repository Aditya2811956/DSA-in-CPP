#include<iostream>
#include<vector>
using namespace std;
    int main() {
        vector <int> a={2,7,11,15};
        int target=9;
        vector <int> arr;
        int st=0;
        int end=a.size()-1;
        while(st<end){
            if(a[st]+a[end]>target){
                end--;
            }
            else if(a[st]+a[end]<target){
                st++;
            }
            else{
                int i=st+1;
                int j=end+1;
                arr.push_back(i);
                arr.push_back(j);
                break;
            }
        }
        for(int i:arr){
            cout<<i;
        }
       return 0; 
    }