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
            a = mini;
            b = maxi;
            maxi = a;
            mini = b % a;
        }
        return maxi;
    }
};