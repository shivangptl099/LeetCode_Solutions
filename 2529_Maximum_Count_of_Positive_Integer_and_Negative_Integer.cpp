class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int i;
        int posCount = 0;
        int negCount = 0;
        for(i = 0; i < nums.size(); i++)
        {
            if(nums[i] > 0) posCount++;
            else if(nums[i] < 0) negCount++;
        }
        return max(posCount,negCount);
    }
};
