class Solution {
public:
    // walls & guards => -1
    // guarded => 1
    // unguarded => 0
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>>grid(m, vector<int>(n, 0));
        for(auto w : walls) grid[w[0]][w[1]] = -1;
        for(auto g : guards) grid[g[0]][g[1]] = -1;

        for(auto g : guards){
            int x = g[0];
            int y = g[1];
             // for cols up direction
            for(int r = x - 1; r >= 0; r--){
                if(grid[r][y] == -1) break;
                grid[r][y] = 1;
            }
            // for cols down direction
            for(int r = x + 1; r < m; r++){
                if(grid[r][y] == -1) break;
                grid[r][y] = 1;
            }
            // for rows left direction
            for(int c = y - 1; c >= 0; c--){
                if(grid[x][c] == -1) break;
                grid[x][c] = 1;
            }
            // for rows left direction
            for(int c = y + 1; c < n; c++){
                if(grid[x][c] == -1) break;
                grid[x][c] = 1;
            }
        }
        int ans = 0;
        for(auto i : grid){
            for(auto j : i){
                if(j == 0) ans++;
            }
        }
        return ans;
    }
};
