class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int mini = INT_MAX, neg_count = 0;
        long long ans = 0;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] < 0) neg_count++;
                mini = min(abs(matrix[i][j]), mini);
                ans += abs(matrix[i][j]);
            }
        }
        if(neg_count % 2 != 0){
            ans -= (2 * mini);
        }
        return ans;
    }
};
