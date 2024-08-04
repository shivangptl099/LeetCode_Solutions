class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> subarr_sum;
        long long MOD = 1e9 + 7;
        for(int i = 0; i < n; i++){
            int curr_sum = 0;
            for(int j = i; j < n; j++){
                curr_sum = (curr_sum + nums[j]) % MOD;
                subarr_sum.push_back(curr_sum);
            }
        }
        sort(subarr_sum.begin(), subarr_sum.end());
        int ans = 0;
        for(int i = left - 1; i < right; i++){
            ans = (ans + subarr_sum[i]) % MOD;
        }
        return ans;
    }
};
