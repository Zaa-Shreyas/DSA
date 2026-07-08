class Solution {
public:
    bool isPalindrome(int x) {
        int rev, pdm = 0;
        int og = x;

        if (x < 0) return false;

        while(x != 0)
        {
            rev = x%10 ;
            x /= 10;
            if (pdm > INT_MAX/10 || pdm < INT_MIN/10) return false;
            pdm = pdm*10 + rev;
        }

        return pdm == og;

        

    }
};