class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int m = grid.size();
        int n = grid[0].size();
        int total = m*n;
        vector<vector<int>> ans(m, vector<int>(n));
        for(int i = 0 ; i < m ; i++){
            for(int j = 0; j < n; j++){
                int old_1d_index = n*i + j;
                int new_1d_index = (old_1d_index + k) % total;
                int new_r = new_1d_index / n;
                int new_c = new_1d_index % n;
                ans[new_r][new_c] = grid[i][j];
            }
        }
        return ans;
    }
};