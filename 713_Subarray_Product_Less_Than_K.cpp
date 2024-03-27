class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int start = 0, end = 0, count = 0;
        long p = 1;
        while(end < nums.size()){
            p *= nums[end];
            while(start < nums.size() && p >= k)
                p /= nums[start++];
            if(p < k) count += end - start + 1;
            end++;
        }
        return count;
    }
};
