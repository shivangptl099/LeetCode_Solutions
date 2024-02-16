class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int i = 0;
        int n = nums.size();
        if(n < indexDifference) return {-1,-1};
        while(i < n - indexDifference)
        {
            int j = i + indexDifference;
            while(j < n)
            {
                if(abs(nums[i] - nums[j]) >= valueDifference) return {i,j};
                j++;
            }
            i++;
        }
        return {-1,-1}; 
    }
};
