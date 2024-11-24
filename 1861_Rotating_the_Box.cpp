class Solution {
public:
    void fill(vector<vector<char>>& ans, int count, int x, int y){
        while(count){
            ans[x][y] = '#';
            x--;
            count--;
        }
    }

    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size();
        int n = box[0].size();
        vector<vector<char>> ans(n, vector<char>(m, '.'));

        for(int i = 0; i < m; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(box[i][j] == '#') count++;
                else if(box[i][j] == '*'){
                    ans[j][m - i - 1] = '*';
                    fill(ans, count, j - 1, m - i - 1);
                    count = 0;
                }
            }
            if(count > 0){
                fill(ans, count, n - 1, m - i - 1);
            }
        }
        return ans;
    }
};
