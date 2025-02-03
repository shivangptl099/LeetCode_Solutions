class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1, incr = 1, decr = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i - 1]) incr++;
            else incr = 1;
            if(nums[i] < nums[i - 1]) decr++;
            else decr = 1;
            ans = max(ans, max(incr, decr));
        }
        return ans;
    }
};
