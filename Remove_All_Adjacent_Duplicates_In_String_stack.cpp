//leetcode 1047
class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        stack<char> stk;
        stk.push(s[0]);
        for(int i=1;i<n;i++){
            char  temp=s[i];
            if(!stk.empty() && temp==stk.top()){
                temp=0;
                stk.pop();
            }
            else{
                stk.push(temp);
            }
        }
        string c="";
        while(!stk.empty()){
            c+=stk.top();
            stk.pop();
        }
        string x="";
        int y=c.length();
        for(int i=y-1;i>=0;i--){
            x+=c[i];
        }
        return x;
    }
};