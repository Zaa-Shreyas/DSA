class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left =  0;
        int count = INT_MAX;
        int sum = 0;
        for(int right = 0; right<nums.size(); right++){
            sum += nums[right];
            while(sum>=target && left<=right){
                count = min(count,right-left+1);
                sum -= nums[left];
                left++;
            }
            
        }
        if(count == INT_MAX) return 0;
        return count;
    }
};