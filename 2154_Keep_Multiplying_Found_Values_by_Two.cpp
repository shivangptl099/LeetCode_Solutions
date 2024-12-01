class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> mySet(nums.begin(), nums.end());
        while(mySet.contains(original)){
            original *= 2;
        }
        return original;
    }
};
