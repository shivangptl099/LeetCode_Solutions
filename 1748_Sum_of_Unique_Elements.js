var sumOfUnique = function(nums) {
    nums = nums.sort((a,b) => a-b);
    let i = 0;
    let last = 0;
    let sum = 0;
    while(i<nums.length){
        if(nums[i] !== last) sum += nums[i];
        last = nums[i];
        i++;
    }
    return sum;
};
