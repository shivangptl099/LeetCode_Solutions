class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        long long sum = 0, curr = 0;
        int i = 0;
        while(i < n){
            sum += nums[i];
            i++;
        }
        i = 0;
        while(i < n - 1){
            curr += nums[i];
            if(curr >= sum - curr) ans++;
            i++;
        }
        return ans;
    }
};
