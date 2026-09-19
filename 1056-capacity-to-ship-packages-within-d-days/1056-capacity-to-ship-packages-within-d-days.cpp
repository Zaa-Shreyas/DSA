class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = INT_MIN;
        int high = 0;
        int mid;
        
        for(int x : weights){
            low = max(low,x);
            high += x;
        }
        while(low<=high){
            mid = low+(high-low)/2;
            int capacity = 0;
            int day = 1;
            for(int i = 0; i<weights.size(); i++){
                if(capacity + weights[i] > mid){
                    day++;
                    capacity = weights[i];
                }
                else{
                    capacity += weights[i];
                }
            }

            if(day > days){
                
                low = mid+1;
            }
            else{

                high = mid-1;
            }
        }
        return low;
    }
};