class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        int max_f = INT_MIN;
        for(int x : nums){
            mp[x]++;
            if(mp[x] > max_f) max_f = mp[x];
        }
        auto it = mp.begin();
        int ans = 0;
        for(auto it : mp){
                if(it.second == max_f) ans += it.second;
            }
        return ans;
    }
};
