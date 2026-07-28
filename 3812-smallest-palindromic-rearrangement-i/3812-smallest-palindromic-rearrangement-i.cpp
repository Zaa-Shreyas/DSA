class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        int half = n/2;

        vector<int> count(26,0);
        for(int i = 0; i<half; i++){
            count[s[i]-'a']++;
        }
        string ans = "";
        for(int i = 0; i<26; i++){
            if(count[i]>0){
                ans.append(count[i], 'a'+i);
            }
        }
        string middle = "";
        if (n % 2 != 0) {
            middle += s[half];
        }
        string left = ans;
        reverse(left.begin(),left.end());

        return ans + middle + left;
    }
};