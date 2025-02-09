class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        long long total_pairs = n * (n - 1) / 2;
        long long good_pairs = 0;
        unordered_map<int, int> freq;
        for(int i = 0; i < n; i++){
            if(freq.find(i - nums[i]) != freq.end()){
                good_pairs += freq[i - nums[i]];
            }
            freq[i - nums[i]]++;
        }
        return total_pairs - good_pairs;
    }
};
