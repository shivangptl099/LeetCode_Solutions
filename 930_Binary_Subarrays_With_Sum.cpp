class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans = 0,sum = 0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(int x : nums){
            sum += x;
            if(mp.count(sum - goal)){
                ans += mp[sum - goal];
            }
            mp[sum]++;
        }
        return ans;
    }
};
