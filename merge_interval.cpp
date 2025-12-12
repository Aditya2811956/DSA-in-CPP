 vector<vector<int>> merge(vector<vector<int>>& arr) {
       sort(arr.begin(),arr.end()); 
       int n=arr.size();
       vector<vector<int>> ans;
       int i=0,j=1;
       if(n==0) return ans;
      int curL = arr[i][0], curR = arr[i][1];

        while (j < n) {
            if (curR < arr[j][0]) {
                ans.push_back({curL, curR});
                curL = arr[j][0];
                curR = arr[j][1];
                j++;
            } else {
                curR = max(curR, arr[j][1]);
                j++;
            }
        }
        ans.push_back({curL,curR});
       return ans;
    }