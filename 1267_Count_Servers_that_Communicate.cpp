class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> rowCount(m, 0), colCount(n, 0);
        for(int i = 0; i < m; i++){
            int curr = 0;
            for(int j = 0; j < n; j++){
                if(grid[i][j]) curr++;
            }
            rowCount[i] = curr;
        }
        for(int j = 0; j < n; j++){
            int curr = 0;
            for(int i = 0; i < m; i++){
                if(grid[i][j]) curr++;
            }
            colCount[j] = curr;
        }
        int ans = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j]){
                    if(rowCount[i] > 1 || colCount[j] > 1) ans++;
                }
            }
        }
        return ans;
    }
};
