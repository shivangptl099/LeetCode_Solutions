class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int> freq;
        int non_dist_count = 0, ans = 0, i = 0, n = nums.size();
        for(auto it : nums){
            freq[it]++;
            if(freq[it] == 2) non_dist_count++;
        }
        while(non_dist_count > 0 && i < n){
            int x = 0;
            while(i < n && x < 3){
                freq[nums[i]]--;
                if(freq[nums[i]] == 1) non_dist_count--;
                i++;
                x++;
            }
            ans++;
        }
        return ans;
    }
};
