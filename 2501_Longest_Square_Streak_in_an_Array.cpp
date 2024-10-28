class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        set<int> mySet;
        int ans = -1;
        for(int x : nums) mySet.insert(x);
        for(int x : nums){
            long long temp = x;
            int count = 0;
            while(mySet.count(temp)){
                if (temp > sqrt(LLONG_MAX)) break;
                temp *= temp;
                count++;
            }
            if(count >= 2) ans = max(ans, count);
        }
        return ans;
    }
};
