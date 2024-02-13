class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int i = 0,temp;
        int arraySum = 0;
        int digitSum = 0;
        while(i < nums.size())
        {
            arraySum += nums[i];
            temp = nums[i];
            while(temp > 0)
            {
                digitSum += (temp % 10);
                temp /= 10;
            }
            i++;
        }
        return abs(arraySum - digitSum);
    }
};
