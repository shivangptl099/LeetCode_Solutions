class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0;
        for(int val : nums)
            if(++mp[val] > 1) ans ^= val; 
        return ans;
    }
};
