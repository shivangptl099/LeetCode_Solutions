class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(i; i < n; i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};
