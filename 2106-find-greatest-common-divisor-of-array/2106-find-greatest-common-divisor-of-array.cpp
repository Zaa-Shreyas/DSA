class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int a,b;
        for(int x:nums){
            mini = min(mini,x);
            maxi = max(maxi,x);
        }
        while(mini){
            
            b = maxi % mini;
            maxi = mini;
            mini = b;
        }
        return maxi;
    }
};