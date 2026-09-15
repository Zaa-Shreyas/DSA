class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currmax = nums[0];
        int currmin = nums[0];
        int globalmax = nums[0];
        int globalmin = nums[0];
        for(int i = 1; i < nums.size(); i++){
            currmax = max(nums[i], nums[i]+currmax);
            currmin = min(nums[i], nums[i]+currmin);
            globalmax = max(globalmax, currmax);
            globalmin = min(globalmin, currmin);

        }
        return max(globalmax, abs(globalmin));
    }
};