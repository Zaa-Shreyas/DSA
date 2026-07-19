class Solution {
public:
    string smallestSubsequence(string s) {
        string ans;
        unordered_map<char,int> um;
        vector<bool> visited(26,false);
        for(char c : s){
            um[c]++;
        }
        for(char c : s){
            um[c]--;
            if(visited[c - 'a'] == true){
                continue;
            }
            while(!ans.empty() && c<ans.back() && um[ans.back()] > 0 ){
                visited[ans.back() - 'a'] = false;
                ans.pop_back();
            }

            ans.push_back(c);
            visited[c-'a'] = true;
        }
        return ans;
    }
};