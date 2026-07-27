class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_1 = INT_MIN;
        int max_2 = INT_MIN;
        for(int x : nums){
            int om = max_1;
            max_1 = max(max_1,x);
            max_2 = max(max_2,min(x,om));
        }
        return (max_1 - 1) * (max_2-1);
    }
};