class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxsum = nums[0];
        int globalmax = nums[0];
        int globalmin = nums[0];
        int minsum = nums[0];
        int total = nums[0];
        for(int i = 1; i<nums.size(); i++){
            maxsum = max(nums[i], maxsum+nums[i]);
            globalmax = max(maxsum,globalmax);
            minsum = min(nums[i], minsum+nums[i]);
            globalmin = min(minsum,globalmin);
            total += nums[i];
        }
        if(globalmax < 0){
            return globalmax;
        }
        else{
            return max(globalmax, total-globalmin);
        }
    }
};