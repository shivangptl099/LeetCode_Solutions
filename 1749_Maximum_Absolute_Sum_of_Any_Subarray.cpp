class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxi = nums[0], mini = nums[0];
        int curr1 = 0, curr2 = 0;
        for (int x : nums) {
            curr1 += x;
            if(maxi < curr1) maxi = curr1;
            if(curr1 < 0) curr1 = 0;
            curr2 += x;
            if(mini > curr2) mini = curr2;
            if(curr2 > 0) curr2 = 0;
        }
        return max(abs(maxi), abs(mini));
    }
};
