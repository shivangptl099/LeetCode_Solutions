class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), ans = 0;
        vector<vector<int>> dp(m, vector<int> (n, 0));
        for(int j = n - 2; j >= 0; j--){
            for(int i = 0; i < m; i++){
                if(i > 0 && grid[i - 1][j + 1] > grid[i][j]){
                    dp[i][j] = max(dp[i][j], 1 + dp[i - 1][j + 1]);
                }
                if(grid[i][j + 1] > grid[i][j]){
                    dp[i][j] = max(dp[i][j], 1 + dp[i][j + 1]);
                }
                if(i < m - 1 && grid[i + 1][j + 1] > grid[i][j]){
                    dp[i][j] = max(dp[i][j], 1 + dp[i + 1][j + 1]);
                }
                if(j == 0) ans = max(ans, dp[i][j]);
            }
        }
        return ans;
    }
};
