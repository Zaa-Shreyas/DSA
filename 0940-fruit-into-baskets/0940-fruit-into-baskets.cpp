class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> um;
        int left = 0;
        int ans = 0;
        for(int right = 0; right<fruits.size(); right++){
            um[fruits[right]]++;
            while(um.size()>2){
                um[fruits[left]]--;
                if(um[fruits[left]] == 0) um.erase(fruits[left]);
                left++;
            }
            ans = max(ans, right-left+1);
        }
        return ans;
    }
};