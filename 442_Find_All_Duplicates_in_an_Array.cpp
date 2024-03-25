class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int t = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0) t = abs(nums[i]) - 1;
            else t = nums[i] - 1;
            if(nums[t] > 0) nums[t] = -nums[t];
            else ans.push_back(abs(nums[i]));
        }
        return ans;
    }
};
