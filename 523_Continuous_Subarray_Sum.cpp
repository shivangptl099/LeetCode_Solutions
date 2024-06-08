class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 0;
        int n = nums.size(), sum = 0;
        for(int i = 0; i < n; i++){
            sum = (sum + nums[i]) % k;
            if(mp.find(sum) != mp.end()){
                if((i+1 - mp[sum] >= 2)) return true;
            } else {
                mp[sum] = i + 1;
            }
        }
        return false;
    }
};
