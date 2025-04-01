class Solution {
public:
    long long dp[100001];
    long long maxPoints(vector<vector<int>>& questions, int i){
        if(i >= questions.size()) return 0;
        if(dp[i] != -1) return dp[i];
        long long take = questions[i][0] + maxPoints(questions, i + questions[i][1] + 1);
        long long notTake = maxPoints(questions, i + 1);
        return dp[i] = max(take, notTake);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        memset(dp, -1, sizeof(dp));
        return maxPoints(questions, 0);
    }
};
