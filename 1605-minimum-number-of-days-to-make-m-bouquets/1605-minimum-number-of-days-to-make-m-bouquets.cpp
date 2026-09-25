class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
       if(1LL*m*k > bloomDay.size()) return -1;
       int low = INT_MAX;
       int high = INT_MIN;
       int mid;
       for(int x : bloomDay){
            low = min(low,x);
            high = max(high,x);
        }
        while(low<=high){
            mid = low + (high-low)/2;
            int flower = 0;
            int bouq = 0;
            for(int i = 0; i<bloomDay.size(); i++){
                if(bloomDay[i] <= mid){
                    flower++;
                    if(flower == k){
                        bouq++;
                        flower = 0;
                    }
                }
                else{
                    flower = 0;
                
                }
            }
            if(bouq >= m){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low; 
    }
};