var pivotIndex = function(nums) {
    let leftSum = 0;
    let rightSum = 0;
    let ans = -1;
    for(let i = 0; i < nums.length ; i++)
    {
        rightSum = 0;
        for(let j = i + 1; j < nums.length; j++)
        {
            rightSum += nums[j];
        }
        if(leftSum == rightSum)
        {
            return i;
        }
        leftSum += nums[i];
    }
    return ans;
};
