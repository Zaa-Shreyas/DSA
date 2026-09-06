class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> run_min;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int ans = -1;
        for(int i = nums.size()-1; i>=0; i--){
            mini = min(mini, nums[i]);
            run_min.push_back(mini);
        }



        for(int j = 0; j<nums.size(); j++){
            maxi = max(maxi,nums[j]);
            int temp = maxi - run_min[nums.size()-1 - j];
            if(temp <= k){
                if(ans == -1) ans = INT_MAX;
                ans = min(ans,j);
            }

        }
        return ans;
    }
};