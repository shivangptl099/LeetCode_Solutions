var sumOfUnique = function(nums) {
    nums = nums.sort((a,b) => a-b);
    let i = 0;
    let sum = 0;
    while(i<nums.length){
        if(i === 0 && nums[i] !== nums[i+1]) sum += nums[i];
        else if(i === nums.length - 1 && nums[i-1] !== nums[i]) sum += nums[i];
        else if(nums[i] !== nums[i-1] && nums[i] !== nums[i+1]) sum += nums[i];
        i++;
    }
    return sum;
};
