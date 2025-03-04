class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int n = nums.size();
        for(int i = 0; i <= n - k; i++){
            unordered_map<int, bool> seen;
            for(int j = i; j < i + k; j++){
                if(!seen[nums[j]]){
                    freq[nums[j]]++;
                    seen[nums[j]] = true;
                }
            }
        }
        int ans = -1;
        for(auto& [num, count] : freq){
            if(count == 1) ans = max(ans, num);
        }
        return ans;
    }
};
