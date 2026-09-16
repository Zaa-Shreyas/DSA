class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x/2;
        int mid;

        if(x<1) return 0;
        if(x==1) return 1;
        while(low<=high){
            mid = low+(high-low)/2;
            if(1LL*mid*mid == x){
                return mid;
            }
            else if(1LL*mid*mid > x){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return high;
    }
};