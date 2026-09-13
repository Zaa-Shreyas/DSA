class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> vc(k,0);
        vc[0] = 1;
        int count = 0;
        int current = 0;
        for(int i = 0; i < nums.size(); i++){
            current += nums[i];
            int lookup = ((current%k) + k)%k;
            count += vc[lookup];
            vc[lookup]++;
        }
        return count;
    }
};