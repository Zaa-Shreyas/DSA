class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int low = 0;
        int high = nums.size()-1;
        int mid,pos1 = -1,pos2 = -1;
        while(low<=high){
            mid = low+(high-low)/2;
            if(nums[mid] == target){
                pos1 = mid;
                high = mid-1;
            }
            else if(nums[mid]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
    
        low = 0;
        high = nums.size()-1;
        while(low<=high){
            mid = low+(high-low)/2;
            if(nums[mid] == target){
                pos2 = mid;
                low = mid+1;
            }
            else if(nums[mid]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        
        ans.push_back(pos1);
        ans.push_back(pos2);
        return ans;
    }
};