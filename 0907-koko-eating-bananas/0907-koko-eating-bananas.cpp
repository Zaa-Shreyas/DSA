class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        int mid;
        int ans = INT_MAX;
        for(int i = 0; i<piles.size(); i++){
            if(piles[i]>high){
                high = piles[i];
            }
        }
        while(low<=high){
            mid = low+(high-low)/2;
            long long counter=0;
            for(int j = 0;j<piles.size(); j++){
                if(piles[j]%mid == 0){
                    counter += piles[j]/mid;
                }
                else{
                    counter += (piles[j]/mid) + 1;
                }
            }
            if(counter <= h){
                ans = min(ans,mid);
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }
};