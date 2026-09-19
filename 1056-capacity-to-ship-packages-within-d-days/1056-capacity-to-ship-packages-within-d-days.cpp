class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = INT_MIN;
        int high = 0;
        int mid;
        int ans = INT_MAX;
        
        for(int x : weights){
            low = max(low,x);
            high += x;
        }
        while(low<=high){
            mid = low+(high-low)/2;
            int capacity = 0;
            int day = 0;
            for(int i = 0; i<weights.size(); i++){
                if(capacity + weights[i] > mid){
                    day++;
                    capacity = weights[i];
                }
                else{
                    capacity += weights[i];
                }
            }

            if(day+1 > days){
                
                low = mid+1;
            }
            else{
                ans = min(ans,mid);
                high = mid-1;
            }
        }
        return ans;
    }
};