class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int leftSum = 0;
        int rightSum = 0;
        for(int i : nums){
            rightSum += i;
        }
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(i - 1 >= 0){
                leftSum += nums[i - 1];
            }
            rightSum -= nums[i];
            ans.push_back(abs(leftSum - rightSum));
        }
        return ans;
    }
};
