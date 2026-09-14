class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        um[0]=-1;
        int current = 0;
        for(int i = 0; i<nums.size(); i++){
            current += nums[i];
            if(um.find(current%k) != um.end()){
                if(i - um[current%k] >= 2){
                    return true;
                }
            }
            else{
                um[current%k] = i;
            }
            
        }
        return false;
    }
};