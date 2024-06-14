class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            int pre = nums[i - 1];
            int curr = nums[i];
            if(pre >= curr){
                ans += pre - curr + 1;
                nums[i] = pre + 1;
            }
        }
        return ans;
    }
};
