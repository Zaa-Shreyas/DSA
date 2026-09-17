class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        int ans = INT_MAX;
        while(low <= high){
            mid = low+(high-low)/2;
            if(nums[mid]>nums[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
            ans = min(ans,nums[mid]);
        }
        return ans;
    }
};