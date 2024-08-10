class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> directions = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        vector<vector<int>> ans;
        int i = 0;
        int steps = 1;
        int r = rStart;
        int c = cStart;
        while(ans.size() < rows * cols){
            for(int j = 0; j < 2; j++){
                int x = directions[i][0];
                int y = directions[i][1];
                for(int k = 0; k < steps; k++){
                    if(0 <= r && r < rows && 0 <= c && c < cols){
                        ans.push_back({r,c});
                    }
                    r += x;
                    c += y;
                }
                i = (i + 1) % 4;
            }
            steps++;
        }
        return ans;
    }
};
