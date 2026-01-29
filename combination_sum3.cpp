class Solution {
public:
    void sum(int k, int n, int start, vector<vector<int>>& ans, vector<int> a) {
        if (k == 0 && n == 0) {
            ans.push_back(a);
            return;
        }
        if (k < 0 || n < 0) {
            return;
        }
        for (int i = start; i < 10; i++) {
            a.push_back(i);
            sum(k - 1, n - i,  i+1,ans, a);
            a.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> a;
        sum(k, n, 1, ans, a);
        return ans;
    }
};