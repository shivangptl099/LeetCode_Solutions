class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size(), maxi = 1, lastIndex = 0;
        vector<int> dp(n, 1), hash(n);
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            hash[i] = i;
            for(int j = 0; j < i; j++){
                if(nums[i] % nums[j] == 0 && 1 + dp[j] > dp[i]){
                    dp[i] = 1 + dp[j];
                    hash[i] = j;
                }
            }
            if(dp[i] > maxi){
                maxi = dp[i];
                lastIndex = i;
            }
        }
        vector<int> ans;
        ans.push_back(nums[lastIndex]);
        while(hash[lastIndex] != lastIndex){
            lastIndex = hash[lastIndex];
            ans.push_back(nums[lastIndex]);
        }
        return ans;
    }
};
