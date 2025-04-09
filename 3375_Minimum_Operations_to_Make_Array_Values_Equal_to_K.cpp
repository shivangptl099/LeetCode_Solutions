class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> mySet;
        for(int x : nums){
            if(x < k) return -1;
            if(x > k) mySet.insert(x);
        }
        return mySet.size();
    }
};
