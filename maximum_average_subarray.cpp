class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        double n=arr.size();
        double count=0;
        for(int i=0;i<k;i++){
            count+=arr[i];
        }
        double x=count;
        
        for(int i=k;i<n;i++){
            count +=arr[i]-arr[i-k];
            x=max(x,count);
        }
        return x/k;
    }
};