class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int first = 0, second = 0;
        vector<bool> help(256,0);
        int len = 0;
        while(second<s.size()){
            while(help[s[second]]){
                help[s[first]] = 0;
                first++;
            }

            help[s[second]] = 1;
            len = max(len, second-first+1);
            second++;
        }
        return len;
    }
};