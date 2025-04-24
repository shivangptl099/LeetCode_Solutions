class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        int u_count;
        {
            set<int> unique;
            for(int x : nums) unique.insert(x);
            u_count = unique.size();
        }
        set<int> counts;
        int ans = 0, n = nums.size();
        if(u_count == 1) return n * (n + 1) / 2;
        for(int i = 0; i < n - 1; i++){
            counts.insert(nums[i]);
            for(int j = i + 1; j < n; j++){
                counts.insert(nums[j]);
                if(counts.size() == u_count){
                ans += n - j;
                break;
                }
            }
            counts.clear();
        }
        return ans;
    }
};
