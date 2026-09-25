class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = INT_MIN;
        int mid,high = 0;
        for(int x : nums){
            low = max(low,x);
            high += x;
        }
        while(low<=high){
            mid = low+(high-low)/2;
            int counter = 1;
            int sum = 0;
            for(int i = 0; i<nums.size(); i++){
                if(sum + nums[i]>mid){
                    counter++;
                    sum = nums[i];
                }
                else{
                    sum += nums[i];
                }
            }
            if(counter <= k){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};