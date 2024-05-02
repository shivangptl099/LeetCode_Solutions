class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> mySet;
        int ans = -1;
        for(int x : nums)
            if(x < 0) mySet.insert(x);
        for(int x : nums)
            if(x > ans && mySet.find(-x) != mySet.end())
                ans = x;
        return ans;
    }
};
