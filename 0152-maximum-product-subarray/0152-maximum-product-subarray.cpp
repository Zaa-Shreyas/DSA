class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int posprod = nums[0];
        int negprod = nums[0];
        int maxprod = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i]<0){
                swap(posprod,negprod);
            }
            posprod = max(nums[i], nums[i]*posprod);
            negprod = min(nums[i], nums[i]*negprod);
            maxprod = max(maxprod, posprod);
            
        }
        return maxprod;
    }
};