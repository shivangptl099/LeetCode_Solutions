class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> series(n, 1);
        for(int i = 1; i < n; i++){
            if((nums[i] & 1) != (nums[i - 1] & 1)){
                series[i] = series[i - 1] + 1;
            }
        }
        int q = queries.size();
        vector<bool> ans(q);
        for(int i = 0; i < q; i++){
            int start = queries[i][0], end = queries[i][1];
            int range = end - start + 1;
            if(series[queries[i][1]] >= range) ans[i] = true;
            else ans[i] = false;
        }
        return ans;
    }
};
