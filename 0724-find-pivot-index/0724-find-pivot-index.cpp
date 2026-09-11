class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        int current = 0;
        for(int i = 0; i < nums.size(); i++){
            total += nums[i];
        }
        for(int i = 0; i<nums.size(); i++){
            if(current == (total-current-nums[i])) return i;
            current += nums[i];
        }
        return -1;
    }
};