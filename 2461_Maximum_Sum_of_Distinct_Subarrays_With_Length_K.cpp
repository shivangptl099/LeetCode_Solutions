class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        long long ans = 0, curr_sum = 0;
        for(int i = 0; i < k; i++){
            curr_sum += nums[i];
            mp[nums[i]]++;
        }
        if(mp.size() == k) ans = curr_sum;
        int s = 0;
        int e = k;
        while(e < nums.size()){
            curr_sum += (nums[e] - nums[s]);
            mp[nums[s]]--;
            if(mp[nums[s]] == 0) mp.erase(nums[s]);
            mp[nums[e]]++;
            if(mp.size() == k) ans = max(ans, curr_sum);
            s++;
            e++;
        }
        return ans;
    }
};
