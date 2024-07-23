class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> mp1;
        for(int x : nums)
            mp1[x]++;
        map<int, vector<int>> mp2;
        for(auto it : mp1)
            mp2[it.second].push_back(it.first);
        for(auto it : mp2)
            sort(mp2[it.first].begin(), mp2[it.first].end(), greater<>());
        vector<int> ans;
        for(auto it : mp2){
            int freq = it.first;
            vector<int> temp = it.second;
            for(int y : temp){
                for(int i = 0; i < freq; i++)
                    ans.push_back(y);
            }
        }
        return ans;
    }
};
