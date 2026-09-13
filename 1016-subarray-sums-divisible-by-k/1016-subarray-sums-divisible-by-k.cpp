class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        um[0] = 1;
        int count = 0;
        int current = 0;
        for(int i = 0; i < nums.size(); i++){
            current += nums[i];
            int lookup = ((current%k) + k)%k;
            if(um.find(lookup) != um.end()) count += um[lookup];
            um[lookup]++;
        }
        return count;
    }
};