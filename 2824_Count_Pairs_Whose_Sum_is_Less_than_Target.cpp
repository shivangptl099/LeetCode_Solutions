class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int i = 0;
        int count = 0;
        int n = nums.size();
        while(i < n - 1)
        {
            int j = i + 1;
            while(j < n)
            {
                if(nums[j] + nums[i] < target) count++;
                j++;
            }
            i++;
        }
        return count;
    }
};
