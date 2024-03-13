class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int x = 1, rowStart = 0, colStart = 0, rowEnd = n - 1, colEnd = n - 1;
        vector<vector<int>> ans(n, vector<int>(n));
        while(rowStart <= rowEnd && colStart <= colEnd){
            for(int i = colStart; i <= colEnd; i++){
                ans[rowStart][i] = x++;
            }
            rowStart++;
            for(int i = rowStart; i <= rowEnd; i++){
                ans[i][colEnd] = x++;
            }
            colEnd--;
            if(rowStart <= rowEnd){
                for(int i = colEnd; i >= colStart; i--){
                    ans[rowEnd][i] = x++;
                }
                rowEnd--;
            }
            if(colStart <= colEnd){
                for(int i = rowEnd; i >= rowStart; i--){
                    ans[i][colStart] = x++;
                }
                colStart++;
            }
        }
        return ans;
    }
};
