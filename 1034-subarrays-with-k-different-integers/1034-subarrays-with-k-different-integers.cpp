class Solution {
public:
    int atMost(vector<int>& nums, int k){
        int left = 0;
        int count = 0;
        unordered_map<int,int> um;
        for(int right = 0; right<nums.size(); right++){
            if(um[nums[right]] == 0) k--;
            um[nums[right]]++;
            
            while(k < 0){
                um[nums[left]]--;
                if(um[nums[left]] == 0) 
                {
                    um.erase(nums[left]);
                    k++;
                }
                left++;
            }   
            count += right-left+1; 
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k) - atMost(nums,k-1);
    }
};