class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> um;
        um[0] = -1;
        int len = 0;
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                sum += 1;
            }
            else{
                sum -= 1;
            }
            if(um.find(sum) != um.end()) {
                len = max(len,(i-um[sum]));
            }
            else{
                um[sum] = i;
            }
        }
        return len;
    }
};