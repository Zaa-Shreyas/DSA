class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a = INT_MIN;
        int b = INT_MIN;
        int c = INT_MIN;

        int d = INT_MAX;
        int e = INT_MAX;
        for(int tra:nums){
            int oa = a;
            int ob = b;
            int od = d;

            a = max(a, tra);
            b = max(b, min(tra,oa));
            c = max(c, min(tra,ob));

            d = min(d,tra);
            e = min(e, max(tra, od));

        }
        return max((a*b*c), (d*e*a));
    }
};