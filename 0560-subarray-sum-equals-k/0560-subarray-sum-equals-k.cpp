class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int current = 0;
        int count = 0;
        unordered_map<int,int> um;
        um[0] = 1;
        for(int i = 0; i < nums.size(); i++){
            current += nums[i];
            if(um.find(current-k) != um.end()) count += um[current-k];
            um[current]++;
        }
        return count;
    }
};