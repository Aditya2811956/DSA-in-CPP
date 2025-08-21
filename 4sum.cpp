#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        vector<int> arr={1,0,-1,0,-2,2};
        int target =0;
        sort(arr.begin(), arr.end());
        int n = arr.size();
        vector<vector<int>> count;
        for (int j = 0; j < n; j++) {
            if (j > 0 && arr[j] == arr[j - 1])
                    continue;
            for (int i =j+ 1; i < n; i++) {
                if (i >j + 1 && arr[i] == arr[i - 1])
                    continue;
                int st = i + 1;
                int end = n - 1;
                while (st < end) {
                    long long sum = (long long)arr[j] + arr[i] + arr[st] + arr[end];
                    if (sum < target) {
                        st++;
                    } else if (sum > target) {
                        end--;
                    } else {
                        count.push_back({arr[j], arr[i], arr[st], arr[end]});
                        while (st < end && arr[st] == arr[st + 1])
                            st++;
                        while (st < end && arr[end] == arr[end - 1])
                            end--;
                        st++;
                        end--;
                    }
                }
            }
        }
        for(auto i : count){
            for(auto j:i){
                cout<<j;
            }
        }  
    return 0;
}

