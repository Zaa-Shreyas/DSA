class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.length();

        int total_ones = 0;
        for (char c : s) {
            if (c == '1') total_ones++;
        }

        int max_ones = total_ones;
        int prev_zeros = 0; 

      
        int i = 0;
        while (i < n) {
            int start = i;
            while (i < n && s[i] == s[start]) {
                i++;
            }
            int block_size = i - start;

            if (s[start] == '0') {
                
                prev_zeros = block_size;
            } else { 
               
                if (prev_zeros > 0 && i < n && s[i] == '0') {
                
                    int right_start = i;
                    while (i < n && s[i] == '0') {
                        i++;
                    }
                    int right_zeros = i - right_start;

                    int candidate = total_ones + prev_zeros + right_zeros;
                    max_ones = std::max(max_ones, candidate);

                    prev_zeros = right_zeros;
                } else {
                    
                    prev_zeros = 0;
                }
            }
        }

        return max_ones;
    }
};