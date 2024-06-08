class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector<int> arr(nums.size());
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            arr[i] = sum % k;
        }
        for(int i = 0; i < nums.size(); i++){
            
        }
    }
};
