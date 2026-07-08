class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); i++) {
            // Optimization: If the fixed element is > 0, three positive numbers can't sum to 0
            if (nums[i] > 0) break; 
            
            // Skip duplicate values for the 'i' pointer
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            // Reset pointers for the remaining subarray
            int j = i + 1;
            int k = nums.size() - 1;
            
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                
                if (sum == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    
                    while (j < k && nums[j] == nums[j + 1]) j++;
                    while (j < k && nums[k] == nums[k - 1]) k--;
                    
                    j++;
                    k--;
                } 
                else if (sum > 0) {
                    k--; 
                } 
                else {
                    j++; 
                }
            }
        }
        return ans;
    }
};