class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int evenSum = 0, i,val,index;
        for(i = 0; i < nums.size(); i++)
            if(nums[i] % 2 == 0)
                evenSum += nums[i];
        vector<int> ans;
        for(i = 0; i < queries.size(); i++){
            val = queries[i][0];
            index = queries[i][1];
            if(nums[index] % 2 == 0) evenSum -= nums[index];
            nums[index] += val;
            if(nums[index] % 2 == 0) evenSum += nums[index];
            ans.push_back(evenSum);
        }
        return ans;
    }
};
