class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int r, sum = 0;
        int ans = 0;
        unordered_map<int, int> mp;
        mp[0]++;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            r = sum % k;
            if(r < 0) r += k;
            if(mp.find(r) != mp.end()) ans+= mp[r];
            mp[r]++;
        }
        return ans;
    }
};
