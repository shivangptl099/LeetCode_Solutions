class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string, int> mp;
        for(auto row : matrix){
            string pattern;
            for(int col = 0; col < row.size(); col++){
                pattern += (row[0] == row[col] ? "T" : "F");
            }
            mp[pattern]++;
        }
        int ans = 0;
        for(auto it : mp){
            ans = max(it.second, ans);
        }
        return ans;
    }
};
