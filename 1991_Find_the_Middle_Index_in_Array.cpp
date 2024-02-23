class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = 0;
        for(int i : nums){
            total += i;
        }
        int leftSum = 0;
        int rightSum = total;
        for(int i = 0; i < nums.size(); i++){
            if(i - 1 >= 0){
                leftSum += nums[i - 1];
            }
                rightSum -= nums[i];
            if(leftSum == rightSum) return i;
        }
        return -1;
    }
};
