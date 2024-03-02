class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int op = 0;
        while(nums[0] < k){
            nums[0] = k + 1;
            op++;
            sort(nums.begin(),nums.end());
        }
        return op;
    }
};
