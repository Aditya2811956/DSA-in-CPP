class Solution {
public:
    bool solve(vector<double> &nums){
        if(nums.size()==1){
            return abs(nums[0]-24)<=1e-6;//0.000006 is epsilon value 
        }                             //used for solving problem of real division

        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j){
                    continue;
                }

                vector<double> temp;
                for(int k=0;k<nums.size();k++){
                    if(k!=i && k!=j){
                        temp.push_back(nums[k]);
                    }
                }

                    double a=nums[i];
                    double b=nums[j];

                    vector<double> poss={a+b , a-b , b-a , a*b };

                    if(abs(a)>1e-6){
                        poss.push_back(b/a);
                    }

                    if(abs(b)>1e-6){
                        poss.push_back(a/b);
                    }

                    for(double val : poss){
                        temp.push_back(val);
                        if(solve(temp)==true){
                            return true;
                        }
                        temp.pop_back();
                    }
            }
        } 
        return false;
    }
    bool judgePoint24(vector<int>& cards) {
        vector<double> nums;
        for(int i=0;i<cards.size();i++){
            nums.push_back(1.0*cards[i]);
        }
        return solve(nums);
    }
};