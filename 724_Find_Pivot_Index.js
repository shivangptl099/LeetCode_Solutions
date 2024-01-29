var pivotIndex = function(nums) {
    let rightSum = 0;
    for(let i = 0; i < nums.length; i++) rightSum += nums[i];
    let leftSum = 0;
    let ans = -1;
    for(let i = 0; i < nums.length; i++)
    {
        let temp = nums[i]
        rightSum -= temp;
        if(leftSum == rightSum)
        {
            return i;
        }
        leftSum += temp;
    }
    return ans;
};
