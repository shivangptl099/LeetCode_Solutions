class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_element = INT_MIN;
        for(int x : nums){
            max_element = max(max_element, x);
        }
        int curr = 1, i = 1, ans = 1;
        while(i < nums.size()){
            if(nums[i] == nums[i - 1] && nums[i] == max_element){
                curr++;
                ans = max(curr, ans);
            } else {
                curr = 1;
            }
            i++;
        }
        return ans;
    }
};
