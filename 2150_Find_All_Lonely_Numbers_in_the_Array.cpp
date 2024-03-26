class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int x : nums) mp[x]++;
        for(int x : nums){
            if(mp[x] > 1) continue;
            else{
                if(mp.find(x - 1) != mp.end()) continue;
                else if(mp.find(x + 1) != mp.end()) continue;
                else ans.push_back(x);
            }
        }
        return ans;
    }
};
