287. Find the Duplicate Numbervar findDuplicate = function(nums) {
    for(let i = 0; i < nums.length - 1; i++){
        for(let j = i + 1; j < nums.length; j++)
        if(nums[i] === nums[j]) return nums[i];
    }
};
